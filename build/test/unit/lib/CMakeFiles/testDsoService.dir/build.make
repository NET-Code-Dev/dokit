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
include test/unit/lib/CMakeFiles/testDsoService.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/unit/lib/CMakeFiles/testDsoService.dir/compiler_depend.make

# Include the progress variables for this target.
include test/unit/lib/CMakeFiles/testDsoService.dir/progress.make

# Include the compile flags for this target's objects.
include test/unit/lib/CMakeFiles/testDsoService.dir/flags.make

test/unit/lib/CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o: test/unit/lib/CMakeFiles/testDsoService.dir/flags.make
test/unit/lib/CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o: test/unit/lib/testDsoService_autogen/mocs_compilation.cpp
test/unit/lib/CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o: test/unit/lib/CMakeFiles/testDsoService.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/unit/lib/CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/unit/lib/CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o -MF CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o -c /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/testDsoService_autogen/mocs_compilation.cpp

test/unit/lib/CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.i"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/testDsoService_autogen/mocs_compilation.cpp > CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.i

test/unit/lib/CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.s"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/testDsoService_autogen/mocs_compilation.cpp -o CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.s

test/unit/lib/CMakeFiles/testDsoService.dir/testdsoservice.cpp.o: test/unit/lib/CMakeFiles/testDsoService.dir/flags.make
test/unit/lib/CMakeFiles/testDsoService.dir/testdsoservice.cpp.o: /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib/testdsoservice.cpp
test/unit/lib/CMakeFiles/testDsoService.dir/testdsoservice.cpp.o: test/unit/lib/CMakeFiles/testDsoService.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/unit/lib/CMakeFiles/testDsoService.dir/testdsoservice.cpp.o"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/unit/lib/CMakeFiles/testDsoService.dir/testdsoservice.cpp.o -MF CMakeFiles/testDsoService.dir/testdsoservice.cpp.o.d -o CMakeFiles/testDsoService.dir/testdsoservice.cpp.o -c /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib/testdsoservice.cpp

test/unit/lib/CMakeFiles/testDsoService.dir/testdsoservice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/testDsoService.dir/testdsoservice.cpp.i"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib/testdsoservice.cpp > CMakeFiles/testDsoService.dir/testdsoservice.cpp.i

test/unit/lib/CMakeFiles/testDsoService.dir/testdsoservice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/testDsoService.dir/testdsoservice.cpp.s"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib/testdsoservice.cpp -o CMakeFiles/testDsoService.dir/testdsoservice.cpp.s

# Object files for target testDsoService
testDsoService_OBJECTS = \
"CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/testDsoService.dir/testdsoservice.cpp.o"

# External object files for target testDsoService
testDsoService_EXTERNAL_OBJECTS =

test/unit/lib/testDsoService: test/unit/lib/CMakeFiles/testDsoService.dir/testDsoService_autogen/mocs_compilation.cpp.o
test/unit/lib/testDsoService: test/unit/lib/CMakeFiles/testDsoService.dir/testdsoservice.cpp.o
test/unit/lib/testDsoService: test/unit/lib/CMakeFiles/testDsoService.dir/build.make
test/unit/lib/testDsoService: src/lib/libQtPokit.dylib
test/unit/lib/testDsoService: /opt/homebrew/lib/QtBluetooth.framework/Versions/A/QtBluetooth
test/unit/lib/testDsoService: /opt/homebrew/lib/QtTest.framework/Versions/A/QtTest
test/unit/lib/testDsoService: /opt/homebrew/lib/QtNetwork.framework/Versions/A/QtNetwork
test/unit/lib/testDsoService: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
test/unit/lib/testDsoService: test/unit/lib/CMakeFiles/testDsoService.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testDsoService"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testDsoService.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/unit/lib/CMakeFiles/testDsoService.dir/build: test/unit/lib/testDsoService
.PHONY : test/unit/lib/CMakeFiles/testDsoService.dir/build

test/unit/lib/CMakeFiles/testDsoService.dir/clean:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib && $(CMAKE_COMMAND) -P CMakeFiles/testDsoService.dir/cmake_clean.cmake
.PHONY : test/unit/lib/CMakeFiles/testDsoService.dir/clean

test/unit/lib/CMakeFiles/testDsoService.dir/depend:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/test/unit/lib /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/test/unit/lib/CMakeFiles/testDsoService.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/unit/lib/CMakeFiles/testDsoService.dir/depend

