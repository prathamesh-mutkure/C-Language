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
CMAKE_SOURCE_DIR = /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Files_Line_Count.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Files_Line_Count.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Files_Line_Count.dir/flags.make

CMakeFiles/Files_Line_Count.dir/main.c.o: CMakeFiles/Files_Line_Count.dir/flags.make
CMakeFiles/Files_Line_Count.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Files_Line_Count.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Files_Line_Count.dir/main.c.o   -c /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/main.c

CMakeFiles/Files_Line_Count.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Files_Line_Count.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/main.c > CMakeFiles/Files_Line_Count.dir/main.c.i

CMakeFiles/Files_Line_Count.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Files_Line_Count.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/main.c -o CMakeFiles/Files_Line_Count.dir/main.c.s

# Object files for target Files_Line_Count
Files_Line_Count_OBJECTS = \
"CMakeFiles/Files_Line_Count.dir/main.c.o"

# External object files for target Files_Line_Count
Files_Line_Count_EXTERNAL_OBJECTS =

Files_Line_Count: CMakeFiles/Files_Line_Count.dir/main.c.o
Files_Line_Count: CMakeFiles/Files_Line_Count.dir/build.make
Files_Line_Count: CMakeFiles/Files_Line_Count.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Files_Line_Count"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Files_Line_Count.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Files_Line_Count.dir/build: Files_Line_Count

.PHONY : CMakeFiles/Files_Line_Count.dir/build

CMakeFiles/Files_Line_Count.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Files_Line_Count.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Files_Line_Count.dir/clean

CMakeFiles/Files_Line_Count.dir/depend:
	cd /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/cmake-build-debug /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/cmake-build-debug /home/prathamesh/Desktop/C-Language/Projects/Files-Line-Count/cmake-build-debug/CMakeFiles/Files_Line_Count.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Files_Line_Count.dir/depend

