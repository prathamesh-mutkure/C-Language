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
CMAKE_SOURCE_DIR = /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Dynamic_Memory_Allocation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dynamic_Memory_Allocation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dynamic_Memory_Allocation.dir/flags.make

CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.o: CMakeFiles/Dynamic_Memory_Allocation.dir/flags.make
CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.o   -c /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/main.c

CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/main.c > CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.i

CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/main.c -o CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.s

# Object files for target Dynamic_Memory_Allocation
Dynamic_Memory_Allocation_OBJECTS = \
"CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.o"

# External object files for target Dynamic_Memory_Allocation
Dynamic_Memory_Allocation_EXTERNAL_OBJECTS =

Dynamic_Memory_Allocation: CMakeFiles/Dynamic_Memory_Allocation.dir/main.c.o
Dynamic_Memory_Allocation: CMakeFiles/Dynamic_Memory_Allocation.dir/build.make
Dynamic_Memory_Allocation: CMakeFiles/Dynamic_Memory_Allocation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Dynamic_Memory_Allocation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dynamic_Memory_Allocation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dynamic_Memory_Allocation.dir/build: Dynamic_Memory_Allocation

.PHONY : CMakeFiles/Dynamic_Memory_Allocation.dir/build

CMakeFiles/Dynamic_Memory_Allocation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dynamic_Memory_Allocation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dynamic_Memory_Allocation.dir/clean

CMakeFiles/Dynamic_Memory_Allocation.dir/depend:
	cd /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/cmake-build-debug /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/cmake-build-debug /home/prathamesh/Desktop/C-Language/Core/Advance/Pointers/Dynamic-Memory-Allocation/cmake-build-debug/CMakeFiles/Dynamic_Memory_Allocation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dynamic_Memory_Allocation.dir/depend

