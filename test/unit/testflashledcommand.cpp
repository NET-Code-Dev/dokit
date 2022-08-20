// SPDX-FileCopyrightText: 2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testflashledcommand.h"

#include "flashledcommand.h"

class MockDeviceCommand : public DeviceCommand
{
public:
    MockDeviceCommand() : DeviceCommand(nullptr)
    {

    }

    AbstractPokitService * getService() override
    {
        return nullptr;
    }
};

void TestFlashLedCommand::requiredOptions() {
    FlashLedCommand command(this);
    MockDeviceCommand mock;
    QCommandLineParser parser;
    const QStringList expected = mock.requiredOptions(parser);
    QCOMPARE(command.requiredOptions(parser), expected);
}

void TestFlashLedCommand::supportedOptions() {
    FlashLedCommand command(this);
    MockDeviceCommand mock;
    QCommandLineParser parser;
    const QStringList expected = command.requiredOptions(parser) + mock.supportedOptions(parser);
    QCOMPARE(command.supportedOptions(parser), expected);
}

void TestFlashLedCommand::processOptions() {
    /// \todo Implement processOptions test.
}

void TestFlashLedCommand::getService() {
    /// \todo Implement getService test.
}

void TestFlashLedCommand::serviceDetailsDiscovered() {
    /// \todo Implement serviceDetailsDiscovered test.
}

void TestFlashLedCommand::deviceLedFlashed() {
    /// \todo Implement deviceLedFlashed test.
}

void TestFlashLedCommand::tr()
{
    // Exercise the inline tr() function (added by the Q_OBJECT macro) to avoid false negatives in
    // test coverage.  There is no need to actually test tr() here, since its part of the Qt API.
    FlashLedCommand command(nullptr);
    QVERIFY(!command.tr("ignored").isEmpty());
}

QTEST_MAIN(TestFlashLedCommand)
