# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/70/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pointer_Arrays_Example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pointer_Arrays_Example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pointer_Arrays_Example.dir/flags.make

CMakeFiles/Pointer_Arrays_Example.dir/main.c.o: CMakeFiles/Pointer_Arrays_Example.dir/flags.make
CMakeFiles/Pointer_Arrays_Example.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Pointer_Arrays_Example.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Pointer_Arrays_Example.dir/main.c.o   -c /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/main.c

CMakeFiles/Pointer_Arrays_Example.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Pointer_Arrays_Example.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/main.c > CMakeFiles/Pointer_Arrays_Example.dir/main.c.i

CMakeFiles/Pointer_Arrays_Example.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Pointer_Arrays_Example.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/main.c -o CMakeFiles/Pointer_Arrays_Example.dir/main.c.s

# Object files for target Pointer_Arrays_Example
Pointer_Arrays_Example_OBJECTS = \
"CMakeFiles/Pointer_Arrays_Example.dir/main.c.o"

# External object files for target Pointer_Arrays_Example
Pointer_Arrays_Example_EXTERNAL_OBJECTS =

Pointer_Arrays_Example: CMakeFiles/Pointer_Arrays_Example.dir/main.c.o
Pointer_Arrays_Example: CMakeFiles/Pointer_Arrays_Example.dir/build.make
Pointer_Arrays_Example: CMakeFiles/Pointer_Arrays_Example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Pointer_Arrays_Example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pointer_Arrays_Example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pointer_Arrays_Example.dir/build: Pointer_Arrays_Example

.PHONY : CMakeFiles/Pointer_Arrays_Example.dir/build

CMakeFiles/Pointer_Arrays_Example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pointer_Arrays_Example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pointer_Arrays_Example.dir/clean

CMakeFiles/Pointer_Arrays_Example.dir/depend:
	cd /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/cmake-build-debug /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/cmake-build-debug /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Pointer-Arrays-Example/cmake-build-debug/CMakeFiles/Pointer_Arrays_Example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pointer_Arrays_Example.dir/depend

