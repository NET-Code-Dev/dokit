// SPDX-FileCopyrightText: 2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestDsoCommand : public QObject
{
    Q_OBJECT

private slots:
     void requiredOptions();

     void supportedOptions();

     void processOptions();

     void getService();

     void serviceDetailsDiscovered();

     void lowestRange();

     void lowestCurrentRange();

     void lowestVoltageRange();

     void settingsWritten();

     void metadataRead();

     void outputSamples();
};
