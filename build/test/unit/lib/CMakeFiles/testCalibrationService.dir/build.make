# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.5/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build

# Include any dependencies generated for this target.
include test/unit/lib/CMakeFiles/testCalibrationService.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/unit/lib/CMakeFiles/testCalibrationService.dir/compiler_depend.make

# Include the progress variables for this target.
include test/unit/lib/CMakeFiles/testCalibrationService.dir/progress.make

# Include the compile flags for this target's objects.
include test/unit/lib/CMakeFiles/testCalibrationService.dir/flags.make

test/unit/lib/CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o: test/unit/lib/CMakeFiles/testCalibrationService.dir/flags.make
test/unit/lib/CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o: test/unit/lib/testCalibrationService_autogen/mocs_compilation.cpp
test/unit/lib/CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o: test/unit/lib/CMakeFiles/testCalibrationService.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/unit/lib/CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/unit/lib/CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o -MF CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o -c /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/testCalibrationService_autogen/mocs_compilation.cpp

test/unit/lib/CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.i"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/testCalibrationService_autogen/mocs_compilation.cpp > CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.i

test/unit/lib/CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.s"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/testCalibrationService_autogen/mocs_compilation.cpp -o CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.s

test/unit/lib/CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o: test/unit/lib/CMakeFiles/testCalibrationService.dir/flags.make
test/unit/lib/CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o: /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib/testcalibrationservice.cpp
test/unit/lib/CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o: test/unit/lib/CMakeFiles/testCalibrationService.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/unit/lib/CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/unit/lib/CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o -MF CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o.d -o CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o -c /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib/testcalibrationservice.cpp

test/unit/lib/CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.i"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib/testcalibrationservice.cpp > CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.i

test/unit/lib/CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.s"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib/testcalibrationservice.cpp -o CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.s

# Object files for target testCalibrationService
testCalibrationService_OBJECTS = \
"CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o"

# External object files for target testCalibrationService
testCalibrationService_EXTERNAL_OBJECTS =

test/unit/lib/testCalibrationService: test/unit/lib/CMakeFiles/testCalibrationService.dir/testCalibrationService_autogen/mocs_compilation.cpp.o
test/unit/lib/testCalibrationService: test/unit/lib/CMakeFiles/testCalibrationService.dir/testcalibrationservice.cpp.o
test/unit/lib/testCalibrationService: test/unit/lib/CMakeFiles/testCalibrationService.dir/build.make
test/unit/lib/testCalibrationService: src/lib/libQtPokit.dylib
test/unit/lib/testCalibrationService: /opt/homebrew/lib/QtBluetooth.framework/Versions/A/QtBluetooth
test/unit/lib/testCalibrationService: /opt/homebrew/lib/QtTest.framework/Versions/A/QtTest
test/unit/lib/testCalibrationService: /opt/homebrew/lib/QtNetwork.framework/Versions/A/QtNetwork
test/unit/lib/testCalibrationService: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
test/unit/lib/testCalibrationService: test/unit/lib/CMakeFiles/testCalibrationService.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testCalibrationService"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testCalibrationService.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/unit/lib/CMakeFiles/testCalibrationService.dir/build: test/unit/lib/testCalibrationService
.PHONY : test/unit/lib/CMakeFiles/testCalibrationService.dir/build

test/unit/lib/CMakeFiles/testCalibrationService.dir/clean:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && $(CMAKE_COMMAND) -P CMakeFiles/testCalibrationService.dir/cmake_clean.cmake
.PHONY : test/unit/lib/CMakeFiles/testCalibrationService.dir/clean

test/unit/lib/CMakeFiles/testCalibrationService.dir/depend:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/CMakeFiles/testCalibrationService.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/unit/lib/CMakeFiles/testCalibrationService.dir/depend

