# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /test/Modelica-Compiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /test/Modelica-Compiler/build

# Utility rule file for gram.

# Include any custom commands dependencies for this target.
include thirdparty/olive/CMakeFiles/gram.dir/compiler_depend.make

# Include the progress variables for this target.
include thirdparty/olive/CMakeFiles/gram.dir/progress.make

thirdparty/olive/CMakeFiles/gram: /test/Modelica-Compiler/thirdparty/olive/gram.c

/test/Modelica-Compiler/thirdparty/olive/gram.c:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/test/Modelica-Compiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /test/Modelica-Compiler/thirdparty/olive/gram.c"
	cd /test/Modelica-Compiler/build/thirdparty/olive && /bin/bison -y /test/Modelica-Compiler/thirdparty/olive/gram.y -o /test/Modelica-Compiler/thirdparty/olive/gram.c

gram: thirdparty/olive/CMakeFiles/gram
gram: /test/Modelica-Compiler/thirdparty/olive/gram.c
gram: thirdparty/olive/CMakeFiles/gram.dir/build.make
.PHONY : gram

# Rule to build all files generated by this target.
thirdparty/olive/CMakeFiles/gram.dir/build: gram
.PHONY : thirdparty/olive/CMakeFiles/gram.dir/build

thirdparty/olive/CMakeFiles/gram.dir/clean:
	cd /test/Modelica-Compiler/build/thirdparty/olive && $(CMAKE_COMMAND) -P CMakeFiles/gram.dir/cmake_clean.cmake
.PHONY : thirdparty/olive/CMakeFiles/gram.dir/clean

thirdparty/olive/CMakeFiles/gram.dir/depend:
	cd /test/Modelica-Compiler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /test/Modelica-Compiler /test/Modelica-Compiler/thirdparty/olive /test/Modelica-Compiler/build /test/Modelica-Compiler/build/thirdparty/olive /test/Modelica-Compiler/build/thirdparty/olive/CMakeFiles/gram.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : thirdparty/olive/CMakeFiles/gram.dir/depend

