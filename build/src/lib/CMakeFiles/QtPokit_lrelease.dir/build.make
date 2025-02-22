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

# Utility rule file for QtPokit_lrelease.

# Include any custom commands dependencies for this target.
include src/lib/CMakeFiles/QtPokit_lrelease.dir/compiler_depend.make

# Include the progress variables for this target.
include src/lib/CMakeFiles/QtPokit_lrelease.dir/progress.make

src/lib/CMakeFiles/QtPokit_lrelease: src/lib/en_AU.qm
src/lib/CMakeFiles/QtPokit_lrelease: src/lib/en_GB.qm
src/lib/CMakeFiles/QtPokit_lrelease: src/lib/en_US.qm

src/lib/en_AU.qm: /opt/homebrew/bin/lrelease
src/lib/en_AU.qm: /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/src/lib/i18n/en_AU.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating en_AU.qm"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib && /opt/homebrew/bin/lrelease /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/src/lib/i18n/en_AU.ts -qm /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib/en_AU.qm

src/lib/en_GB.qm: /opt/homebrew/bin/lrelease
src/lib/en_GB.qm: /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/src/lib/i18n/en_GB.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating en_GB.qm"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib && /opt/homebrew/bin/lrelease /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/src/lib/i18n/en_GB.ts -qm /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib/en_GB.qm

src/lib/en_US.qm: /opt/homebrew/bin/lrelease
src/lib/en_US.qm: /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/src/lib/i18n/en_US.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating en_US.qm"
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib && /opt/homebrew/bin/lrelease /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/src/lib/i18n/en_US.ts -qm /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib/en_US.qm

QtPokit_lrelease: src/lib/CMakeFiles/QtPokit_lrelease
QtPokit_lrelease: src/lib/en_AU.qm
QtPokit_lrelease: src/lib/en_GB.qm
QtPokit_lrelease: src/lib/en_US.qm
QtPokit_lrelease: src/lib/CMakeFiles/QtPokit_lrelease.dir/build.make
.PHONY : QtPokit_lrelease

# Rule to build all files generated by this target.
src/lib/CMakeFiles/QtPokit_lrelease.dir/build: QtPokit_lrelease
.PHONY : src/lib/CMakeFiles/QtPokit_lrelease.dir/build

src/lib/CMakeFiles/QtPokit_lrelease.dir/clean:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib && $(CMAKE_COMMAND) -P CMakeFiles/QtPokit_lrelease.dir/cmake_clean.cmake
.PHONY : src/lib/CMakeFiles/QtPokit_lrelease.dir/clean

src/lib/CMakeFiles/QtPokit_lrelease.dir/depend:
	cd /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/src/lib /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib /Users/darrell/Library/CloudStorage/Dropbox/repos/Dokit/dokit/build/src/lib/CMakeFiles/QtPokit_lrelease.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/lib/CMakeFiles/QtPokit_lrelease.dir/depend

