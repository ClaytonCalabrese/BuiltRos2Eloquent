# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /opt/workspace/src/ros2/rcutils

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/workspace/build/rcutils

# Include any dependencies generated for this target.
include gmock/CMakeFiles/gmock_main.dir/depend.make

# Include the progress variables for this target.
include gmock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include gmock/CMakeFiles/gmock_main.dir/flags.make

gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: gmock/CMakeFiles/gmock_main.dir/flags.make
gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: /opt/workspace/install/gmock_vendor/src/gmock_vendor/src/gmock_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/rcutils/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"
	cd /opt/workspace/build/rcutils/gmock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -c /opt/workspace/install/gmock_vendor/src/gmock_vendor/src/gmock_main.cc

gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /opt/workspace/build/rcutils/gmock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/workspace/install/gmock_vendor/src/gmock_vendor/src/gmock_main.cc > CMakeFiles/gmock_main.dir/src/gmock_main.cc.i

gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /opt/workspace/build/rcutils/gmock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/workspace/install/gmock_vendor/src/gmock_vendor/src/gmock_main.cc -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.s

gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires:

.PHONY : gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires

gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides: gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires
	$(MAKE) -f gmock/CMakeFiles/gmock_main.dir/build.make gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides.build
.PHONY : gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides

gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides.build: gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o


# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

gmock/libgmock_main.a: gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
gmock/libgmock_main.a: gmock/CMakeFiles/gmock_main.dir/build.make
gmock/libgmock_main.a: gmock/CMakeFiles/gmock_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/workspace/build/rcutils/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgmock_main.a"
	cd /opt/workspace/build/rcutils/gmock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean_target.cmake
	cd /opt/workspace/build/rcutils/gmock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gmock/CMakeFiles/gmock_main.dir/build: gmock/libgmock_main.a

.PHONY : gmock/CMakeFiles/gmock_main.dir/build

gmock/CMakeFiles/gmock_main.dir/requires: gmock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires

.PHONY : gmock/CMakeFiles/gmock_main.dir/requires

gmock/CMakeFiles/gmock_main.dir/clean:
	cd /opt/workspace/build/rcutils/gmock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean.cmake
.PHONY : gmock/CMakeFiles/gmock_main.dir/clean

gmock/CMakeFiles/gmock_main.dir/depend:
	cd /opt/workspace/build/rcutils && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/workspace/src/ros2/rcutils /opt/workspace/install/gmock_vendor/src/gmock_vendor /opt/workspace/build/rcutils /opt/workspace/build/rcutils/gmock /opt/workspace/build/rcutils/gmock/CMakeFiles/gmock_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gmock/CMakeFiles/gmock_main.dir/depend
