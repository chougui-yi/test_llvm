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
CMAKE_SOURCE_DIR = /test/test_llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /test/test_llvm/build

# Include any dependencies generated for this target.
include src/codegen/ir/CMakeFiles/ircodegen.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/codegen/ir/CMakeFiles/ircodegen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/codegen/ir/CMakeFiles/ircodegen.dir/progress.make

# Include the compile flags for this target's objects.
include src/codegen/ir/CMakeFiles/ircodegen.dir/flags.make

src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o: src/codegen/ir/CMakeFiles/ircodegen.dir/flags.make
src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o: /test/test_llvm/src/codegen/ir/IRCodeGenerator.cpp
src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o: src/codegen/ir/CMakeFiles/ircodegen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o"
	cd /test/test_llvm/build/src/codegen/ir && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o -MF CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o.d -o CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o -c /test/test_llvm/src/codegen/ir/IRCodeGenerator.cpp

src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.i"
	cd /test/test_llvm/build/src/codegen/ir && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /test/test_llvm/src/codegen/ir/IRCodeGenerator.cpp > CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.i

src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.s"
	cd /test/test_llvm/build/src/codegen/ir && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /test/test_llvm/src/codegen/ir/IRCodeGenerator.cpp -o CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.s

src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o: src/codegen/ir/CMakeFiles/ircodegen.dir/flags.make
src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o: /test/test_llvm/src/codegen/ir/IRCodeGeneratorImpl.cpp
src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o: src/codegen/ir/CMakeFiles/ircodegen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o"
	cd /test/test_llvm/build/src/codegen/ir && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o -MF CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o.d -o CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o -c /test/test_llvm/src/codegen/ir/IRCodeGeneratorImpl.cpp

src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.i"
	cd /test/test_llvm/build/src/codegen/ir && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /test/test_llvm/src/codegen/ir/IRCodeGeneratorImpl.cpp > CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.i

src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.s"
	cd /test/test_llvm/build/src/codegen/ir && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /test/test_llvm/src/codegen/ir/IRCodeGeneratorImpl.cpp -o CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.s

# Object files for target ircodegen
ircodegen_OBJECTS = \
"CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o" \
"CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o"

# External object files for target ircodegen
ircodegen_EXTERNAL_OBJECTS =

lib/libircodegen.a: src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGenerator.cpp.o
lib/libircodegen.a: src/codegen/ir/CMakeFiles/ircodegen.dir/IRCodeGeneratorImpl.cpp.o
lib/libircodegen.a: src/codegen/ir/CMakeFiles/ircodegen.dir/build.make
lib/libircodegen.a: src/codegen/ir/CMakeFiles/ircodegen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../../lib/libircodegen.a"
	cd /test/test_llvm/build/src/codegen/ir && $(CMAKE_COMMAND) -P CMakeFiles/ircodegen.dir/cmake_clean_target.cmake
	cd /test/test_llvm/build/src/codegen/ir && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ircodegen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/codegen/ir/CMakeFiles/ircodegen.dir/build: lib/libircodegen.a
.PHONY : src/codegen/ir/CMakeFiles/ircodegen.dir/build

src/codegen/ir/CMakeFiles/ircodegen.dir/clean:
	cd /test/test_llvm/build/src/codegen/ir && $(CMAKE_COMMAND) -P CMakeFiles/ircodegen.dir/cmake_clean.cmake
.PHONY : src/codegen/ir/CMakeFiles/ircodegen.dir/clean

src/codegen/ir/CMakeFiles/ircodegen.dir/depend:
	cd /test/test_llvm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /test/test_llvm /test/test_llvm/src/codegen/ir /test/test_llvm/build /test/test_llvm/build/src/codegen/ir /test/test_llvm/build/src/codegen/ir/CMakeFiles/ircodegen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/codegen/ir/CMakeFiles/ircodegen.dir/depend

