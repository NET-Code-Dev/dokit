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

# Utility rule file for testCalibrationService_autogen.

# Include any custom commands dependencies for this target.
include test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/progress.make

test/unit/lib/CMakeFiles/testCalibrationService_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target testCalibrationService"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /opt/homebrew/Cellar/cmake/3.27.5/bin/cmake -E cmake_autogen /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/AutogenInfo.json Debug

testCalibrationService_autogen: test/unit/lib/CMakeFiles/testCalibrationService_autogen
testCalibrationService_autogen: test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/build.make
.PHONY : testCalibrationService_autogen

# Rule to build all files generated by this target.
test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/build: testCalibrationService_autogen
.PHONY : test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/build

test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/clean:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && $(CMAKE_COMMAND) -P CMakeFiles/testCalibrationService_autogen.dir/cmake_clean.cmake
.PHONY : test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/clean

test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/depend:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/unit/lib/CMakeFiles/testCalibrationService_autogen.dir/depend

