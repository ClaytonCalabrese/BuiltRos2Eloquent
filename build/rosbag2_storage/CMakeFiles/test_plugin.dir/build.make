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
CMAKE_SOURCE_DIR = /opt/workspace/src/ros2/rosbag2/rosbag2_storage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/workspace/build/rosbag2_storage

# Include any dependencies generated for this target.
include CMakeFiles/test_plugin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_plugin.dir/flags.make

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o: CMakeFiles/test_plugin.dir/flags.make
CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o: /opt/workspace/src/ros2/rosbag2/rosbag2_storage/test/rosbag2_storage/test_plugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/rosbag2_storage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o -c /opt/workspace/src/ros2/rosbag2/rosbag2_storage/test/rosbag2_storage/test_plugin.cpp

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/workspace/src/ros2/rosbag2/rosbag2_storage/test/rosbag2_storage/test_plugin.cpp > CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.i

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/workspace/src/ros2/rosbag2/rosbag2_storage/test/rosbag2_storage/test_plugin.cpp -o CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.s

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o.requires:

.PHONY : CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o.requires

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o.provides: CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_plugin.dir/build.make CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o.provides.build
.PHONY : CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o.provides

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o.provides.build: CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o


CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o: CMakeFiles/test_plugin.dir/flags.make
CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o: /opt/workspace/src/ros2/rosbag2/rosbag2_storage/test/rosbag2_storage/test_read_only_plugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/rosbag2_storage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o -c /opt/workspace/src/ros2/rosbag2/rosbag2_storage/test/rosbag2_storage/test_read_only_plugin.cpp

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/workspace/src/ros2/rosbag2/rosbag2_storage/test/rosbag2_storage/test_read_only_plugin.cpp > CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.i

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/workspace/src/ros2/rosbag2/rosbag2_storage/test/rosbag2_storage/test_read_only_plugin.cpp -o CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.s

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o.requires:

.PHONY : CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o.requires

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o.provides: CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_plugin.dir/build.make CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o.provides.build
.PHONY : CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o.provides

CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o.provides.build: CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o


# Object files for target test_plugin
test_plugin_OBJECTS = \
"CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o" \
"CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o"

# External object files for target test_plugin
test_plugin_EXTERNAL_OBJECTS =

libtest_plugin.so: CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o
libtest_plugin.so: CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o
libtest_plugin.so: CMakeFiles/test_plugin.dir/build.make
libtest_plugin.so: librosbag2_storage.so
libtest_plugin.so: /opt/workspace/install/ament_index_cpp/lib/libament_index_cpp.so
libtest_plugin.so: /usr/lib/libPocoFoundation.so.50
libtest_plugin.so: /usr/lib/x86_64-linux-gnu/libpcre.so
libtest_plugin.so: /usr/lib/x86_64-linux-gnu/libz.so
libtest_plugin.so: /opt/workspace/install/console_bridge_vendor/lib/libconsole_bridge.so.0.4
libtest_plugin.so: /opt/workspace/install/class_loader/lib/libclass_loader.so
libtest_plugin.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
libtest_plugin.so: /opt/workspace/install/rcutils/lib/librcutils.so
libtest_plugin.so: /opt/workspace/install/yaml_cpp_vendor/opt/yaml_cpp_vendor/lib/libyaml-cpp.so.0.6.2
libtest_plugin.so: CMakeFiles/test_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/workspace/build/rosbag2_storage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libtest_plugin.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_plugin.dir/build: libtest_plugin.so

.PHONY : CMakeFiles/test_plugin.dir/build

CMakeFiles/test_plugin.dir/requires: CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_plugin.cpp.o.requires
CMakeFiles/test_plugin.dir/requires: CMakeFiles/test_plugin.dir/test/rosbag2_storage/test_read_only_plugin.cpp.o.requires

.PHONY : CMakeFiles/test_plugin.dir/requires

CMakeFiles/test_plugin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_plugin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_plugin.dir/clean

CMakeFiles/test_plugin.dir/depend:
	cd /opt/workspace/build/rosbag2_storage && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/workspace/src/ros2/rosbag2/rosbag2_storage /opt/workspace/src/ros2/rosbag2/rosbag2_storage /opt/workspace/build/rosbag2_storage /opt/workspace/build/rosbag2_storage /opt/workspace/build/rosbag2_storage/CMakeFiles/test_plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_plugin.dir/depend
