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
CMAKE_SOURCE_DIR = /opt/workspace/src/ros/pluginlib/pluginlib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/workspace/build/pluginlib

# Include any dependencies generated for this target.
include CMakeFiles/test_plugins.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_plugins.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_plugins.dir/flags.make

CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o: CMakeFiles/test_plugins.dir/flags.make
CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o: /opt/workspace/src/ros/pluginlib/pluginlib/test/test_plugins.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/pluginlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o -c /opt/workspace/src/ros/pluginlib/pluginlib/test/test_plugins.cpp

CMakeFiles/test_plugins.dir/test/test_plugins.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_plugins.dir/test/test_plugins.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/workspace/src/ros/pluginlib/pluginlib/test/test_plugins.cpp > CMakeFiles/test_plugins.dir/test/test_plugins.cpp.i

CMakeFiles/test_plugins.dir/test/test_plugins.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_plugins.dir/test/test_plugins.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/workspace/src/ros/pluginlib/pluginlib/test/test_plugins.cpp -o CMakeFiles/test_plugins.dir/test/test_plugins.cpp.s

CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o.requires:

.PHONY : CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o.requires

CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o.provides: CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_plugins.dir/build.make CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o.provides.build
.PHONY : CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o.provides

CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o.provides.build: CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o


# Object files for target test_plugins
test_plugins_OBJECTS = \
"CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o"

# External object files for target test_plugins
test_plugins_EXTERNAL_OBJECTS =

prefix/lib/libtest_plugins.so: CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o
prefix/lib/libtest_plugins.so: CMakeFiles/test_plugins.dir/build.make
prefix/lib/libtest_plugins.so: /usr/lib/libPocoFoundation.so.50
prefix/lib/libtest_plugins.so: /opt/workspace/install/console_bridge_vendor/lib/libconsole_bridge.so.0.4
prefix/lib/libtest_plugins.so: /opt/workspace/install/class_loader/lib/libclass_loader.so
prefix/lib/libtest_plugins.so: /usr/lib/x86_64-linux-gnu/libpcre.so
prefix/lib/libtest_plugins.so: /usr/lib/x86_64-linux-gnu/libz.so
prefix/lib/libtest_plugins.so: CMakeFiles/test_plugins.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/workspace/build/pluginlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library prefix/lib/libtest_plugins.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_plugins.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_plugins.dir/build: prefix/lib/libtest_plugins.so

.PHONY : CMakeFiles/test_plugins.dir/build

CMakeFiles/test_plugins.dir/requires: CMakeFiles/test_plugins.dir/test/test_plugins.cpp.o.requires

.PHONY : CMakeFiles/test_plugins.dir/requires

CMakeFiles/test_plugins.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_plugins.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_plugins.dir/clean

CMakeFiles/test_plugins.dir/depend:
	cd /opt/workspace/build/pluginlib && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/workspace/src/ros/pluginlib/pluginlib /opt/workspace/src/ros/pluginlib/pluginlib /opt/workspace/build/pluginlib /opt/workspace/build/pluginlib /opt/workspace/build/pluginlib/CMakeFiles/test_plugins.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_plugins.dir/depend

