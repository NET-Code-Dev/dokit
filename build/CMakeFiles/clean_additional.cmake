# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "src/cli/CMakeFiles/cli-lib_autogen.dir/AutogenUsed.txt"
  "src/cli/CMakeFiles/cli-lib_autogen.dir/ParseCache.txt"
  "src/cli/CMakeFiles/cli_autogen.dir/AutogenUsed.txt"
  "src/cli/CMakeFiles/cli_autogen.dir/ParseCache.txt"
  "src/cli/cli-lib_autogen"
  "src/cli/cli_autogen"
  "src/lib/CMakeFiles/QtPokit_autogen.dir/AutogenUsed.txt"
  "src/lib/CMakeFiles/QtPokit_autogen.dir/ParseCache.txt"
  "src/lib/QtPokit_autogen"
  "test/unit/cli/CMakeFiles/testAbstractCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testAbstractCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testCalibrateCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testCalibrateCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testDeviceCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testDeviceCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testDsoCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testDsoCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testFlashLedCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testFlashLedCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testInfoCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testInfoCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testLoggerFetchCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testLoggerFetchCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testLoggerStartCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testLoggerStartCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testLoggerStopCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testLoggerStopCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testMeterCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testMeterCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testScanCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testScanCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testSetNameCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testSetNameCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testSetTorchCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testSetTorchCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/CMakeFiles/testStatusCommand_autogen.dir/AutogenUsed.txt"
  "test/unit/cli/CMakeFiles/testStatusCommand_autogen.dir/ParseCache.txt"
  "test/unit/cli/testAbstractCommand_autogen"
  "test/unit/cli/testCalibrateCommand_autogen"
  "test/unit/cli/testDeviceCommand_autogen"
  "test/unit/cli/testDsoCommand_autogen"
  "test/unit/cli/testFlashLedCommand_autogen"
  "test/unit/cli/testInfoCommand_autogen"
  "test/unit/cli/testLoggerFetchCommand_autogen"
  "test/unit/cli/testLoggerStartCommand_autogen"
  "test/unit/cli/testLoggerStopCommand_autogen"
  "test/unit/cli/testMeterCommand_autogen"
  "test/unit/cli/testScanCommand_autogen"
  "test/unit/cli/testSetNameCommand_autogen"
  "test/unit/cli/testSetTorchCommand_autogen"
  "test/unit/cli/testStatusCommand_autogen"
  "test/unit/lib/CMakeFiles/testAbstractPokitService_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testAbstractPokitService_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testDataLoggerService_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testDataLoggerService_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testDeviceInfoService_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testDeviceInfoService_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testDsoService_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testDsoService_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testGenericAccessService_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testGenericAccessService_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testMultimeterService_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testMultimeterService_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testPokitDevice_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testPokitDevice_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testPokitDiscoveryAgent_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testPokitDiscoveryAgent_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testPokitMeter_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testPokitMeter_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testPokitPro_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testPokitPro_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testPokitProducts_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testPokitProducts_autogen.dir/ParseCache.txt"
  "test/unit/lib/CMakeFiles/testStatusService_autogen.dir/AutogenUsed.txt"
  "test/unit/lib/CMakeFiles/testStatusService_autogen.dir/ParseCache.txt"
  "test/unit/lib/testAbstractPokitService_autogen"
  "test/unit/lib/testCalibrationService_autogen"
  "test/unit/lib/testDataLoggerService_autogen"
  "test/unit/lib/testDeviceInfoService_autogen"
  "test/unit/lib/testDsoService_autogen"
  "test/unit/lib/testGenericAccessService_autogen"
  "test/unit/lib/testMultimeterService_autogen"
  "test/unit/lib/testPokitDevice_autogen"
  "test/unit/lib/testPokitDiscoveryAgent_autogen"
  "test/unit/lib/testPokitMeter_autogen"
  "test/unit/lib/testPokitPro_autogen"
  "test/unit/lib/testPokitProducts_autogen"
  "test/unit/lib/testStatusService_autogen"
  )
endif()
