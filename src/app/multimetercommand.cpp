/*
    Copyright 2022 Paul Colby

    This file is part of QtPokit.

    QtPokit is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtPokit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with QtPokit.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "multimetercommand.h"

#include <qtpokit/pokitdevice.h>

#include <QJsonDocument>
#include <QJsonObject>

/*!
 * \class MultimeterCommand
 *
 * The MultimeterCommand class implements the `meter` CLI command.
 */

/*!
 * Construct a new MultimeterCommand object with \a parent.
 */
MultimeterCommand::MultimeterCommand(QObject * const parent) : DeviceCommand(parent), service(nullptr)
{

}

QStringList MultimeterCommand::requiredOptions() const
{
    return DeviceCommand::requiredOptions() + QStringList{
    };
}

QStringList MultimeterCommand::supportedOptions() const
{
    return DeviceCommand::supportedOptions();
}

/*!
 * \copybrief DeviceCommand::processOptions
 *
 * This implementation extends DeviceCommand::processOptions to process additional CLI options
 * supported (or required) by this command.
 */
QStringList MultimeterCommand::processOptions(const QCommandLineParser &parser)
{
    QStringList errors = DeviceCommand::processOptions(parser);
    if (!errors.isEmpty()) {
        return errors;
    }

    return errors;
}

/*!
 * \copybrief DeviceCommand::getService
 *
 * This override returns a pointer to a MultimeterService object.
 */
AbstractPokitService * MultimeterCommand::getService()
{
    Q_ASSERT(device);
    if (!service) {
        service = device->multimeter();
        Q_ASSERT(service);
        connect(service, &MultimeterService::settingsWritten,
                this, &MultimeterCommand::settingsWritten);
    }
    return service;
}

/*!
 * \copybrief DeviceCommand::serviceDetailsDiscovered
 *
 * This override fetches the current device's status, and outputs it in the selected format.
 */
void MultimeterCommand::serviceDetailsDiscovered()
{
    DeviceCommand::serviceDetailsDiscovered(); // Just logs consistently.

    /// \todo
    MultimeterService::Settings settings{
        MultimeterService::MultimeterMode::DcVoltage,
        { MultimeterService::VoltageRange::AutoRange },
        1000
    };

    qCInfo(lc).noquote() << tr("Configuring multimeter settings...");
    service->setSettings(settings);
}

/*!
 * Invoked when the multimeter settings have been written, to begin reading the meter values.
 */
void MultimeterCommand::settingsWritten()
{
    qCDebug(lc).noquote() << tr("Settings written; starting meter readings...");
    connect(service, &MultimeterService::readingRead,
            this, &MultimeterCommand::outputReading);
    service->beginClientReadings();
}

/*!
 * Outputs meter \a reading in the selected ouput format.
 */
void MultimeterCommand::outputReading(const MultimeterService::Reading &reading)
{
    QString status;
    if (reading.status.testFlag(MultimeterService::ReadingStatusFlag::Error)) {
        status = QLatin1String("Error");
    } else switch (reading.mode) {
    case MultimeterService::MultimeterMode::Idle:
        break;
    case MultimeterService::MultimeterMode::DcVoltage:
    case MultimeterService::MultimeterMode::AcVoltage:
    case MultimeterService::MultimeterMode::DcCurrent:
    case MultimeterService::MultimeterMode::AcCurrent:
    case MultimeterService::MultimeterMode::Resistance:
        status = (reading.status.testFlag(MultimeterService::ReadingStatusFlag::AutoRange)
            ? tr("Auto Range On") : tr("Auto Range Off"));
        break;
    case MultimeterService::MultimeterMode::Continuity:
        status = (reading.status.testFlag(MultimeterService::ReadingStatusFlag::AutoRange)
            ? tr("Continuity") : tr("No continuity"));
        break;
    case MultimeterService::MultimeterMode::Temperature:
    case MultimeterService::MultimeterMode::Diode:
        status = tr("Ok");
        break;
    }

    QString units;
    switch (reading.mode) {
    case MultimeterService::MultimeterMode::Idle:        break;
    case MultimeterService::MultimeterMode::DcVoltage:   units = QLatin1String("Vdc"); break;
    case MultimeterService::MultimeterMode::AcVoltage:   units = QLatin1String("Vac"); break;
    case MultimeterService::MultimeterMode::DcCurrent:   units = QLatin1String("Adc"); break;
    case MultimeterService::MultimeterMode::AcCurrent:   units = QLatin1String("Aac"); break;
    case MultimeterService::MultimeterMode::Resistance:  units = QString::fromUtf8("Ω"); break;
    case MultimeterService::MultimeterMode::Diode:       break;
    case MultimeterService::MultimeterMode::Continuity:  break;
    case MultimeterService::MultimeterMode::Temperature: units = QString::fromUtf8("°C"); break;
    }

    QString range;
    QVariant rangeMin, rangeMax;
    switch (reading.mode) {
    case MultimeterService::MultimeterMode::Idle:        break;
    case MultimeterService::MultimeterMode::DcVoltage:
    case MultimeterService::MultimeterMode::AcVoltage:
        range = MultimeterService::toString(reading.range.voltageRange);
        rangeMin = MultimeterService::minValue(reading.range.voltageRange);
        rangeMax = MultimeterService::maxValue(reading.range.voltageRange);
        break;
    case MultimeterService::MultimeterMode::DcCurrent:
    case MultimeterService::MultimeterMode::AcCurrent:
        range = MultimeterService::toString(reading.range.currentRange);
        rangeMin = MultimeterService::minValue(reading.range.currentRange);
        rangeMax = MultimeterService::maxValue(reading.range.currentRange);
        break;
    case MultimeterService::MultimeterMode::Resistance:
        range = MultimeterService::toString(reading.range.resitanceRange);
        rangeMin = MultimeterService::minValue(reading.range.resitanceRange);
        rangeMax = MultimeterService::maxValue(reading.range.resitanceRange);
        break;
    case MultimeterService::MultimeterMode::Diode:       break;
    case MultimeterService::MultimeterMode::Continuity:  break;
    case MultimeterService::MultimeterMode::Temperature: break;
    }

    switch (format) {
    case OutputFormat::Csv:
        fputs(qPrintable(tr("mode,value,units,status,range_min_milli,range_max_milli\n")), stdout);
        fputs(qPrintable(QString::fromLatin1("%1,%2,%3,%4,%5,%6\n")
            .arg(escapeCsvField(MultimeterService::toString(reading.mode)))
            .arg(reading.value, 0, 'f').arg(units, status, rangeMin.toString(), rangeMax.toString())
            ), stdout);
        break;
    case OutputFormat::Json: {
        QJsonObject jsonObject{
            { QLatin1String("status"), status },
            { QLatin1String("value"), qIsInf(reading.value) ?
                QJsonValue(tr("Infinity")) : QJsonValue(reading.value) },
            { QLatin1String("mode"),   MultimeterService::toString(reading.mode) },
        };
        if ((!rangeMin.isNull()) || (!rangeMax.isNull())) {
            jsonObject.insert(QLatin1String("range"), QJsonObject{
                { QLatin1String("min"),
                    #if (QT_VERSION >= QT_VERSION_CHECK(6, 0, 0))
                    (rangeMin.typeId() == QMetaType::Int)
                    #else
                    (rangeMin.type() == QVariant::Int)
                    #endif
                    ? QJsonValue(rangeMin.toInt()/1000.0) : rangeMin.toJsonValue() },
                { QLatin1String("max"),
                    #if (QT_VERSION >= QT_VERSION_CHECK(6, 0, 0))
                    (rangeMax.typeId() == QMetaType::Int) ?
                    #else
                    (rangeMax.type() == QVariant::Int) ?
                    #endif
                    QJsonValue(rangeMax.toInt()/1000.0) : rangeMax.toJsonValue() },
            });
        }
        fputs(QJsonDocument(jsonObject).toJson(), stdout);
    }   break;
    case OutputFormat::Text:
        fputs(qPrintable(tr("Mode:   %1 (0x%2)\n").arg(MultimeterService::toString(reading.mode))
            .arg((quint8)reading.mode,2,16,QLatin1Char('0'))), stdout);
        fputs(qPrintable(tr("Value:  %1 %2\n").arg(reading.value,0,'f').arg(units)), stdout);
        fputs(qPrintable(tr("Status: %1 (0x%2)\n").arg(status)
            .arg(reading.status,2,16,QLatin1Char('0'))), stdout);
        fputs(qPrintable(tr("Range:  %1 (0x%2)\n").arg(range)
            .arg((quint8)reading.range.voltageRange,2,16,QLatin1Char('0'))), stdout);
        break;
    }

}
