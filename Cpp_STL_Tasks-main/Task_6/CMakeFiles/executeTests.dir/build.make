# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/github/Cpp_STL_Tasks/Task_6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/github/Cpp_STL_Tasks/Task_6

# Include any dependencies generated for this target.
include CMakeFiles/executeTests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/executeTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/executeTests.dir/flags.make

CMakeFiles/executeTests.dir/Gtest.cpp.o: CMakeFiles/executeTests.dir/flags.make
CMakeFiles/executeTests.dir/Gtest.cpp.o: Gtest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/github/Cpp_STL_Tasks/Task_6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/executeTests.dir/Gtest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/executeTests.dir/Gtest.cpp.o -c /home/user/github/Cpp_STL_Tasks/Task_6/Gtest.cpp

CMakeFiles/executeTests.dir/Gtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/executeTests.dir/Gtest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/github/Cpp_STL_Tasks/Task_6/Gtest.cpp > CMakeFiles/executeTests.dir/Gtest.cpp.i

CMakeFiles/executeTests.dir/Gtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/executeTests.dir/Gtest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/github/Cpp_STL_Tasks/Task_6/Gtest.cpp -o CMakeFiles/executeTests.dir/Gtest.cpp.s

# Object files for target executeTests
executeTests_OBJECTS = \
"CMakeFiles/executeTests.dir/Gtest.cpp.o"

# External object files for target executeTests
executeTests_EXTERNAL_OBJECTS =

executeTests: CMakeFiles/executeTests.dir/Gtest.cpp.o
executeTests: CMakeFiles/executeTests.dir/build.make
executeTests: /usr/lib/libgtest.a
executeTests: CMakeFiles/executeTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/github/Cpp_STL_Tasks/Task_6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable executeTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/executeTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/executeTests.dir/build: executeTests

.PHONY : CMakeFiles/executeTests.dir/build

CMakeFiles/executeTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/executeTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/executeTests.dir/clean

CMakeFiles/executeTests.dir/depend:
	cd /home/user/github/Cpp_STL_Tasks/Task_6 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/github/Cpp_STL_Tasks/Task_6 /home/user/github/Cpp_STL_Tasks/Task_6 /home/user/github/Cpp_STL_Tasks/Task_6 /home/user/github/Cpp_STL_Tasks/Task_6 /home/user/github/Cpp_STL_Tasks/Task_6/CMakeFiles/executeTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/executeTests.dir/depend

