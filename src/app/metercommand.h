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

#include "devicecommand.h"

#include <qtpokit/multimeterservice.h>

class MeterCommand : public DeviceCommand
{
public:
    explicit MeterCommand(QObject * const parent);

    QStringList requiredOptions(const QCommandLineParser &parser) const override;
    QStringList supportedOptions(const QCommandLineParser &parser) const override;

public slots:
    QStringList processOptions(const QCommandLineParser &parser) override;

protected:
    AbstractPokitService * getService() override;

protected slots:
    void serviceDetailsDiscovered() override;

private:
    MultimeterService * service; ///< Bluetooth service this command interracts with.
    MultimeterService::Settings settings; ///< Settings for the Pokit device's multimeter mode.
    int samplesToGo; ///< Number of samples to read, if specified on the CLI.

    MultimeterService::Range lowestRange(const MultimeterService::Mode mode, const quint32 desiredMax);
    static MultimeterService::CurrentRange lowestCurrentRange(const quint32 desiredMax);
    static MultimeterService::ResistanceRange lowestResistanceRange(const quint32 desiredMax);
    static MultimeterService::VoltageRange lowestVoltageRange(const quint32 desiredMax);

private slots:
    void settingsWritten();
    void outputReading(const MultimeterService::Reading &reading);

    friend class TestMeterCommand;
};
