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
include test/unit/cli/CMakeFiles/testCalibrateCommand.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/unit/cli/CMakeFiles/testCalibrateCommand.dir/compiler_depend.make

# Include the progress variables for this target.
include test/unit/cli/CMakeFiles/testCalibrateCommand.dir/progress.make

# Include the compile flags for this target's objects.
include test/unit/cli/CMakeFiles/testCalibrateCommand.dir/flags.make

test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o: test/unit/cli/CMakeFiles/testCalibrateCommand.dir/flags.make
test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o: test/unit/cli/testCalibrateCommand_autogen/mocs_compilation.cpp
test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o: test/unit/cli/CMakeFiles/testCalibrateCommand.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o -MF CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o -c /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli/testCalibrateCommand_autogen/mocs_compilation.cpp

test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.i"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli/testCalibrateCommand_autogen/mocs_compilation.cpp > CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.i

test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.s"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli/testCalibrateCommand_autogen/mocs_compilation.cpp -o CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.s

test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o: test/unit/cli/CMakeFiles/testCalibrateCommand.dir/flags.make
test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o: /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/cli/testcalibratecommand.cpp
test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o: test/unit/cli/CMakeFiles/testCalibrateCommand.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o -MF CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o.d -o CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o -c /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/cli/testcalibratecommand.cpp

test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.i"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/cli/testcalibratecommand.cpp > CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.i

test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.s"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/cli/testcalibratecommand.cpp -o CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.s

# Object files for target testCalibrateCommand
testCalibrateCommand_OBJECTS = \
"CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o"

# External object files for target testCalibrateCommand
testCalibrateCommand_EXTERNAL_OBJECTS = \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/cli-lib_autogen/mocs_compilation.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/abstractcommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/calibratecommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/devicecommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/dsocommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/flashledcommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/infocommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/loggerfetchcommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/loggerstartcommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/loggerstopcommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/metercommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/scancommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/setnamecommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/settorchcommand.cpp.o" \
"/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/cli/CMakeFiles/cli-lib.dir/statuscommand.cpp.o"

test/unit/cli/testCalibrateCommand: test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testCalibrateCommand_autogen/mocs_compilation.cpp.o
test/unit/cli/testCalibrateCommand: test/unit/cli/CMakeFiles/testCalibrateCommand.dir/testcalibratecommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/cli-lib_autogen/mocs_compilation.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/abstractcommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/calibratecommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/devicecommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/dsocommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/flashledcommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/infocommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/loggerfetchcommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/loggerstartcommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/loggerstopcommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/metercommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/scancommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/setnamecommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/settorchcommand.cpp.o
test/unit/cli/testCalibrateCommand: src/cli/CMakeFiles/cli-lib.dir/statuscommand.cpp.o
test/unit/cli/testCalibrateCommand: test/unit/cli/CMakeFiles/testCalibrateCommand.dir/build.make
test/unit/cli/testCalibrateCommand: /opt/homebrew/lib/QtTest.framework/Versions/A/QtTest
test/unit/cli/testCalibrateCommand: src/lib/libQtPokit.dylib
test/unit/cli/testCalibrateCommand: /opt/homebrew/lib/QtBluetooth.framework/Versions/A/QtBluetooth
test/unit/cli/testCalibrateCommand: /opt/homebrew/lib/QtNetwork.framework/Versions/A/QtNetwork
test/unit/cli/testCalibrateCommand: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
test/unit/cli/testCalibrateCommand: test/unit/cli/CMakeFiles/testCalibrateCommand.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testCalibrateCommand"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testCalibrateCommand.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/unit/cli/CMakeFiles/testCalibrateCommand.dir/build: test/unit/cli/testCalibrateCommand
.PHONY : test/unit/cli/CMakeFiles/testCalibrateCommand.dir/build

test/unit/cli/CMakeFiles/testCalibrateCommand.dir/clean:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli && $(CMAKE_COMMAND) -P CMakeFiles/testCalibrateCommand.dir/cmake_clean.cmake
.PHONY : test/unit/cli/CMakeFiles/testCalibrateCommand.dir/clean

test/unit/cli/CMakeFiles/testCalibrateCommand.dir/depend:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/cli /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/cli/CMakeFiles/testCalibrateCommand.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/unit/cli/CMakeFiles/testCalibrateCommand.dir/depend

