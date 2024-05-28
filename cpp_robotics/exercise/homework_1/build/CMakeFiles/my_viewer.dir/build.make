# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/build

# Include any dependencies generated for this target.
include CMakeFiles/my_viewer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/my_viewer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/my_viewer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_viewer.dir/flags.make

CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o: CMakeFiles/my_viewer.dir/flags.make
CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o: ../my_viewer/my_viewer.cpp
CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o: CMakeFiles/my_viewer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o -MF CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o.d -o CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o -c /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/my_viewer/my_viewer.cpp

CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/my_viewer/my_viewer.cpp > CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.i

CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/my_viewer/my_viewer.cpp -o CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.s

# Object files for target my_viewer
my_viewer_OBJECTS = \
"CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o"

# External object files for target my_viewer
my_viewer_EXTERNAL_OBJECTS =

libmy_viewer.so: CMakeFiles/my_viewer.dir/my_viewer/my_viewer.cpp.o
libmy_viewer.so: CMakeFiles/my_viewer.dir/build.make
libmy_viewer.so: ../open3d/lib/libOpen3D.so
libmy_viewer.so: CMakeFiles/my_viewer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libmy_viewer.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_viewer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_viewer.dir/build: libmy_viewer.so
.PHONY : CMakeFiles/my_viewer.dir/build

CMakeFiles/my_viewer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_viewer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_viewer.dir/clean

CMakeFiles/my_viewer.dir/depend:
	cd /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1 /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1 /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/build /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/build /home/ohmpr/master_bonn/Modules/4th_semester/cpp/cpp_robotics/exercise/homework_1/build/CMakeFiles/my_viewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_viewer.dir/depend
