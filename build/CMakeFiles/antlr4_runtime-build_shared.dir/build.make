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

# Utility rule file for antlr4_runtime-build_shared.

# Include any custom commands dependencies for this target.
include CMakeFiles/antlr4_runtime-build_shared.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/antlr4_runtime-build_shared.dir/progress.make

CMakeFiles/antlr4_runtime-build_shared: antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-build_shared

antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-build_shared:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/test/Modelica-Compiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Performing build_shared step for 'antlr4_runtime'"
	cd /test/Modelica-Compiler/build/antlr4_runtime/src/antlr4_runtime/runtime/Cpp && $(MAKE) antlr4_shared
	cd /test/Modelica-Compiler/build/antlr4_runtime/src/antlr4_runtime/runtime/Cpp && /usr/bin/cmake -E touch /test/Modelica-Compiler/build/antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-build_shared

antlr4_runtime-build_shared: CMakeFiles/antlr4_runtime-build_shared
antlr4_runtime-build_shared: antlr4_runtime/src/antlr4_runtime-stamp/antlr4_runtime-build_shared
antlr4_runtime-build_shared: CMakeFiles/antlr4_runtime-build_shared.dir/build.make
.PHONY : antlr4_runtime-build_shared

# Rule to build all files generated by this target.
CMakeFiles/antlr4_runtime-build_shared.dir/build: antlr4_runtime-build_shared
.PHONY : CMakeFiles/antlr4_runtime-build_shared.dir/build

CMakeFiles/antlr4_runtime-build_shared.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/antlr4_runtime-build_shared.dir/cmake_clean.cmake
.PHONY : CMakeFiles/antlr4_runtime-build_shared.dir/clean

CMakeFiles/antlr4_runtime-build_shared.dir/depend:
	cd /test/Modelica-Compiler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /test/Modelica-Compiler /test/Modelica-Compiler /test/Modelica-Compiler/build /test/Modelica-Compiler/build /test/Modelica-Compiler/build/CMakeFiles/antlr4_runtime-build_shared.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/antlr4_runtime-build_shared.dir/depend

