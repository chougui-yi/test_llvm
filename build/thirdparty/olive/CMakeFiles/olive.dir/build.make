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
include thirdparty/olive/CMakeFiles/olive.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include thirdparty/olive/CMakeFiles/olive.dir/compiler_depend.make

# Include the progress variables for this target.
include thirdparty/olive/CMakeFiles/olive.dir/progress.make

# Include the compile flags for this target's objects.
include thirdparty/olive/CMakeFiles/olive.dir/flags.make

/test/test_llvm/thirdparty/olive/gram.c:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /test/test_llvm/thirdparty/olive/gram.c"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/bison -y /test/test_llvm/thirdparty/olive/gram.y -o /test/test_llvm/thirdparty/olive/gram.c

thirdparty/olive/CMakeFiles/olive.dir/gram.c.o: thirdparty/olive/CMakeFiles/olive.dir/flags.make
thirdparty/olive/CMakeFiles/olive.dir/gram.c.o: /test/test_llvm/thirdparty/olive/gram.c
thirdparty/olive/CMakeFiles/olive.dir/gram.c.o: thirdparty/olive/CMakeFiles/olive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object thirdparty/olive/CMakeFiles/olive.dir/gram.c.o"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT thirdparty/olive/CMakeFiles/olive.dir/gram.c.o -MF CMakeFiles/olive.dir/gram.c.o.d -o CMakeFiles/olive.dir/gram.c.o -c /test/test_llvm/thirdparty/olive/gram.c

thirdparty/olive/CMakeFiles/olive.dir/gram.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/olive.dir/gram.c.i"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /test/test_llvm/thirdparty/olive/gram.c > CMakeFiles/olive.dir/gram.c.i

thirdparty/olive/CMakeFiles/olive.dir/gram.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/olive.dir/gram.c.s"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /test/test_llvm/thirdparty/olive/gram.c -o CMakeFiles/olive.dir/gram.c.s

thirdparty/olive/CMakeFiles/olive.dir/x_arrayc.c.o: thirdparty/olive/CMakeFiles/olive.dir/flags.make
thirdparty/olive/CMakeFiles/olive.dir/x_arrayc.c.o: /test/test_llvm/thirdparty/olive/x_arrayc.c
thirdparty/olive/CMakeFiles/olive.dir/x_arrayc.c.o: thirdparty/olive/CMakeFiles/olive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object thirdparty/olive/CMakeFiles/olive.dir/x_arrayc.c.o"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT thirdparty/olive/CMakeFiles/olive.dir/x_arrayc.c.o -MF CMakeFiles/olive.dir/x_arrayc.c.o.d -o CMakeFiles/olive.dir/x_arrayc.c.o -c /test/test_llvm/thirdparty/olive/x_arrayc.c

thirdparty/olive/CMakeFiles/olive.dir/x_arrayc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/olive.dir/x_arrayc.c.i"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /test/test_llvm/thirdparty/olive/x_arrayc.c > CMakeFiles/olive.dir/x_arrayc.c.i

thirdparty/olive/CMakeFiles/olive.dir/x_arrayc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/olive.dir/x_arrayc.c.s"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /test/test_llvm/thirdparty/olive/x_arrayc.c -o CMakeFiles/olive.dir/x_arrayc.c.s

thirdparty/olive/CMakeFiles/olive.dir/x_arrayp.c.o: thirdparty/olive/CMakeFiles/olive.dir/flags.make
thirdparty/olive/CMakeFiles/olive.dir/x_arrayp.c.o: /test/test_llvm/thirdparty/olive/x_arrayp.c
thirdparty/olive/CMakeFiles/olive.dir/x_arrayp.c.o: thirdparty/olive/CMakeFiles/olive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object thirdparty/olive/CMakeFiles/olive.dir/x_arrayp.c.o"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT thirdparty/olive/CMakeFiles/olive.dir/x_arrayp.c.o -MF CMakeFiles/olive.dir/x_arrayp.c.o.d -o CMakeFiles/olive.dir/x_arrayp.c.o -c /test/test_llvm/thirdparty/olive/x_arrayp.c

thirdparty/olive/CMakeFiles/olive.dir/x_arrayp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/olive.dir/x_arrayp.c.i"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /test/test_llvm/thirdparty/olive/x_arrayp.c > CMakeFiles/olive.dir/x_arrayp.c.i

thirdparty/olive/CMakeFiles/olive.dir/x_arrayp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/olive.dir/x_arrayp.c.s"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /test/test_llvm/thirdparty/olive/x_arrayp.c -o CMakeFiles/olive.dir/x_arrayp.c.s

thirdparty/olive/CMakeFiles/olive.dir/code.c.o: thirdparty/olive/CMakeFiles/olive.dir/flags.make
thirdparty/olive/CMakeFiles/olive.dir/code.c.o: /test/test_llvm/thirdparty/olive/code.c
thirdparty/olive/CMakeFiles/olive.dir/code.c.o: thirdparty/olive/CMakeFiles/olive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object thirdparty/olive/CMakeFiles/olive.dir/code.c.o"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT thirdparty/olive/CMakeFiles/olive.dir/code.c.o -MF CMakeFiles/olive.dir/code.c.o.d -o CMakeFiles/olive.dir/code.c.o -c /test/test_llvm/thirdparty/olive/code.c

thirdparty/olive/CMakeFiles/olive.dir/code.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/olive.dir/code.c.i"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /test/test_llvm/thirdparty/olive/code.c > CMakeFiles/olive.dir/code.c.i

thirdparty/olive/CMakeFiles/olive.dir/code.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/olive.dir/code.c.s"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /test/test_llvm/thirdparty/olive/code.c -o CMakeFiles/olive.dir/code.c.s

thirdparty/olive/CMakeFiles/olive.dir/iburg.c.o: thirdparty/olive/CMakeFiles/olive.dir/flags.make
thirdparty/olive/CMakeFiles/olive.dir/iburg.c.o: /test/test_llvm/thirdparty/olive/iburg.c
thirdparty/olive/CMakeFiles/olive.dir/iburg.c.o: thirdparty/olive/CMakeFiles/olive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object thirdparty/olive/CMakeFiles/olive.dir/iburg.c.o"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT thirdparty/olive/CMakeFiles/olive.dir/iburg.c.o -MF CMakeFiles/olive.dir/iburg.c.o.d -o CMakeFiles/olive.dir/iburg.c.o -c /test/test_llvm/thirdparty/olive/iburg.c

thirdparty/olive/CMakeFiles/olive.dir/iburg.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/olive.dir/iburg.c.i"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /test/test_llvm/thirdparty/olive/iburg.c > CMakeFiles/olive.dir/iburg.c.i

thirdparty/olive/CMakeFiles/olive.dir/iburg.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/olive.dir/iburg.c.s"
	cd /test/test_llvm/build/thirdparty/olive && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /test/test_llvm/thirdparty/olive/iburg.c -o CMakeFiles/olive.dir/iburg.c.s

# Object files for target olive
olive_OBJECTS = \
"CMakeFiles/olive.dir/gram.c.o" \
"CMakeFiles/olive.dir/x_arrayc.c.o" \
"CMakeFiles/olive.dir/x_arrayp.c.o" \
"CMakeFiles/olive.dir/code.c.o" \
"CMakeFiles/olive.dir/iburg.c.o"

# External object files for target olive
olive_EXTERNAL_OBJECTS =

bin/olive: thirdparty/olive/CMakeFiles/olive.dir/gram.c.o
bin/olive: thirdparty/olive/CMakeFiles/olive.dir/x_arrayc.c.o
bin/olive: thirdparty/olive/CMakeFiles/olive.dir/x_arrayp.c.o
bin/olive: thirdparty/olive/CMakeFiles/olive.dir/code.c.o
bin/olive: thirdparty/olive/CMakeFiles/olive.dir/iburg.c.o
bin/olive: thirdparty/olive/CMakeFiles/olive.dir/build.make
bin/olive: thirdparty/olive/CMakeFiles/olive.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/test/test_llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable ../../bin/olive"
	cd /test/test_llvm/build/thirdparty/olive && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/olive.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
thirdparty/olive/CMakeFiles/olive.dir/build: bin/olive
.PHONY : thirdparty/olive/CMakeFiles/olive.dir/build

thirdparty/olive/CMakeFiles/olive.dir/clean:
	cd /test/test_llvm/build/thirdparty/olive && $(CMAKE_COMMAND) -P CMakeFiles/olive.dir/cmake_clean.cmake
.PHONY : thirdparty/olive/CMakeFiles/olive.dir/clean

thirdparty/olive/CMakeFiles/olive.dir/depend: /test/test_llvm/thirdparty/olive/gram.c
	cd /test/test_llvm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /test/test_llvm /test/test_llvm/thirdparty/olive /test/test_llvm/build /test/test_llvm/build/thirdparty/olive /test/test_llvm/build/thirdparty/olive/CMakeFiles/olive.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : thirdparty/olive/CMakeFiles/olive.dir/depend

