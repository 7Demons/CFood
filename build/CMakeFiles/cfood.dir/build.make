# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jennypuzey/COSC345Project/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jennypuzey/COSC345Project/build

# Include any dependencies generated for this target.
include CMakeFiles/cfood.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cfood.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cfood.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cfood.dir/flags.make

CMakeFiles/cfood.dir/main.c.o: CMakeFiles/cfood.dir/flags.make
CMakeFiles/cfood.dir/main.c.o: /Users/jennypuzey/COSC345Project/src/main.c
CMakeFiles/cfood.dir/main.c.o: CMakeFiles/cfood.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jennypuzey/COSC345Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cfood.dir/main.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/cfood.dir/main.c.o -MF CMakeFiles/cfood.dir/main.c.o.d -o CMakeFiles/cfood.dir/main.c.o -c /Users/jennypuzey/COSC345Project/src/main.c

CMakeFiles/cfood.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cfood.dir/main.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/jennypuzey/COSC345Project/src/main.c > CMakeFiles/cfood.dir/main.c.i

CMakeFiles/cfood.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cfood.dir/main.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/jennypuzey/COSC345Project/src/main.c -o CMakeFiles/cfood.dir/main.c.s

# Object files for target cfood
cfood_OBJECTS = \
"CMakeFiles/cfood.dir/main.c.o"

# External object files for target cfood
cfood_EXTERNAL_OBJECTS =

cfood: CMakeFiles/cfood.dir/main.c.o
cfood: CMakeFiles/cfood.dir/build.make
cfood: CMakeFiles/cfood.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jennypuzey/COSC345Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cfood"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cfood.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cfood.dir/build: cfood
.PHONY : CMakeFiles/cfood.dir/build

CMakeFiles/cfood.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cfood.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cfood.dir/clean

CMakeFiles/cfood.dir/depend:
	cd /Users/jennypuzey/COSC345Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jennypuzey/COSC345Project/src /Users/jennypuzey/COSC345Project/src /Users/jennypuzey/COSC345Project/build /Users/jennypuzey/COSC345Project/build /Users/jennypuzey/COSC345Project/build/CMakeFiles/cfood.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cfood.dir/depend

