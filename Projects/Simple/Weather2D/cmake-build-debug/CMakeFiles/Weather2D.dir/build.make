# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /snap/clion/58/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/58/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Weather2D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Weather2D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Weather2D.dir/flags.make

CMakeFiles/Weather2D.dir/main.c.o: CMakeFiles/Weather2D.dir/flags.make
CMakeFiles/Weather2D.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Weather2D.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Weather2D.dir/main.c.o   -c /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/main.c

CMakeFiles/Weather2D.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Weather2D.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/main.c > CMakeFiles/Weather2D.dir/main.c.i

CMakeFiles/Weather2D.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Weather2D.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/main.c -o CMakeFiles/Weather2D.dir/main.c.s

# Object files for target Weather2D
Weather2D_OBJECTS = \
"CMakeFiles/Weather2D.dir/main.c.o"

# External object files for target Weather2D
Weather2D_EXTERNAL_OBJECTS =

Weather2D: CMakeFiles/Weather2D.dir/main.c.o
Weather2D: CMakeFiles/Weather2D.dir/build.make
Weather2D: CMakeFiles/Weather2D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Weather2D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Weather2D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Weather2D.dir/build: Weather2D

.PHONY : CMakeFiles/Weather2D.dir/build

CMakeFiles/Weather2D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Weather2D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Weather2D.dir/clean

CMakeFiles/Weather2D.dir/depend:
	cd /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/cmake-build-debug /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/cmake-build-debug /home/prathamesh/Desktop/C-Language/Projects/Simple/Weather2D/cmake-build-debug/CMakeFiles/Weather2D.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Weather2D.dir/depend

