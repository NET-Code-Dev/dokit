// SPDX-FileCopyrightText: 2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestLoggerStartCommand : public QObject
{
    Q_OBJECT

private slots:
    void requiredOptions();

    void supportedOptions();

    void processOptions();

    void getService();

    void serviceDetailsDiscovered();

    void lowestRange_data();
    void lowestRange();

    void lowestCurrentRange_data();
    void lowestCurrentRange();

    void lowestVoltageRange_data();
    void lowestVoltageRange();

    void settingsWritten();

    void tr();
};
