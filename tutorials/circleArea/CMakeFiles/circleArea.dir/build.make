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
CMAKE_SOURCE_DIR = /home/david/Projects/personal/cplusplus/tutorials/circleArea

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/david/Projects/personal/cplusplus/tutorials/circleArea

# Include any dependencies generated for this target.
include CMakeFiles/circleArea.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/circleArea.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/circleArea.dir/flags.make

CMakeFiles/circleArea.dir/src/main.cpp.o: CMakeFiles/circleArea.dir/flags.make
CMakeFiles/circleArea.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Projects/personal/cplusplus/tutorials/circleArea/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/circleArea.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/circleArea.dir/src/main.cpp.o -c /home/david/Projects/personal/cplusplus/tutorials/circleArea/src/main.cpp

CMakeFiles/circleArea.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/circleArea.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/david/Projects/personal/cplusplus/tutorials/circleArea/src/main.cpp > CMakeFiles/circleArea.dir/src/main.cpp.i

CMakeFiles/circleArea.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/circleArea.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/david/Projects/personal/cplusplus/tutorials/circleArea/src/main.cpp -o CMakeFiles/circleArea.dir/src/main.cpp.s

# Object files for target circleArea
circleArea_OBJECTS = \
"CMakeFiles/circleArea.dir/src/main.cpp.o"

# External object files for target circleArea
circleArea_EXTERNAL_OBJECTS =

circleArea: CMakeFiles/circleArea.dir/src/main.cpp.o
circleArea: CMakeFiles/circleArea.dir/build.make
circleArea: CMakeFiles/circleArea.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/david/Projects/personal/cplusplus/tutorials/circleArea/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable circleArea"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/circleArea.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/circleArea.dir/build: circleArea

.PHONY : CMakeFiles/circleArea.dir/build

CMakeFiles/circleArea.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/circleArea.dir/cmake_clean.cmake
.PHONY : CMakeFiles/circleArea.dir/clean

CMakeFiles/circleArea.dir/depend:
	cd /home/david/Projects/personal/cplusplus/tutorials/circleArea && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/david/Projects/personal/cplusplus/tutorials/circleArea /home/david/Projects/personal/cplusplus/tutorials/circleArea /home/david/Projects/personal/cplusplus/tutorials/circleArea /home/david/Projects/personal/cplusplus/tutorials/circleArea /home/david/Projects/personal/cplusplus/tutorials/circleArea/CMakeFiles/circleArea.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/circleArea.dir/depend

