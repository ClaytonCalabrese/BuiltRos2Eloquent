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
CMAKE_SOURCE_DIR = /opt/workspace/src/ros2/geometry2/tf2_ros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/workspace/build/tf2_ros

# Include any dependencies generated for this target.
include CMakeFiles/buffer_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/buffer_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/buffer_server.dir/flags.make

CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o: CMakeFiles/buffer_server.dir/flags.make
CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o: /opt/workspace/src/ros2/geometry2/tf2_ros/src/buffer_server_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/tf2_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o -c /opt/workspace/src/ros2/geometry2/tf2_ros/src/buffer_server_main.cpp

CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/workspace/src/ros2/geometry2/tf2_ros/src/buffer_server_main.cpp > CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.i

CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/workspace/src/ros2/geometry2/tf2_ros/src/buffer_server_main.cpp -o CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.s

CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o.requires:

.PHONY : CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o.requires

CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o.provides: CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o.requires
	$(MAKE) -f CMakeFiles/buffer_server.dir/build.make CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o.provides.build
.PHONY : CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o.provides

CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o.provides.build: CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o


# Object files for target buffer_server
buffer_server_OBJECTS = \
"CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o"

# External object files for target buffer_server
buffer_server_EXTERNAL_OBJECTS =

buffer_server: CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o
buffer_server: CMakeFiles/buffer_server.dir/build.make
buffer_server: libtf2_ros.so
buffer_server: /opt/workspace/install/rclcpp_action/lib/librclcpp_action.so
buffer_server: /opt/workspace/install/rclcpp/lib/librclcpp.so
buffer_server: /opt/workspace/install/rcpputils/lib/librcpputils.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/rcl_action/lib/librcl_action.so
buffer_server: /opt/workspace/install/rcl/lib/librcl.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_generator_c.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/rcl_yaml_param_parser/lib/librcl_yaml_param_parser.so
buffer_server: /opt/workspace/install/rmw_implementation/lib/librmw_implementation.so
buffer_server: /opt/workspace/install/rcl_logging_spdlog/lib/librcl_logging_spdlog.so
buffer_server: /opt/workspace/install/tracetools/lib/libtracetools.so
buffer_server: /opt/workspace/install/rcutils/lib/librcutils.so
buffer_server: /opt/workspace/install/rmw/lib/librmw.so
buffer_server: /opt/workspace/install/console_bridge_vendor/lib/libconsole_bridge.so.0.4
buffer_server: /opt/workspace/install/tf2/lib/libtf2.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_generator_c.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/rosidl_typesupport_cpp/lib/librosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/rosidl_typesupport_c/lib/librosidl_typesupport_c.so
buffer_server: /opt/workspace/install/rosidl_typesupport_introspection_cpp/lib/librosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/rosidl_typesupport_introspection_c/lib/librosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/rosidl_generator_c/lib/librosidl_generator_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/message_filters/lib/libmessage_filters.so
buffer_server: /opt/workspace/install/rclcpp_action/lib/librclcpp_action.so
buffer_server: /opt/workspace/install/rclcpp/lib/librclcpp.so
buffer_server: /opt/workspace/install/rcpputils/lib/librcpputils.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/rcl_action/lib/librcl_action.so
buffer_server: /opt/workspace/install/rcl/lib/librcl.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_generator_c.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/rcl_yaml_param_parser/lib/librcl_yaml_param_parser.so
buffer_server: /opt/workspace/install/rmw_implementation/lib/librmw_implementation.so
buffer_server: /opt/workspace/install/rcl_logging_spdlog/lib/librcl_logging_spdlog.so
buffer_server: /opt/workspace/install/tracetools/lib/libtracetools.so
buffer_server: /opt/workspace/install/rcutils/lib/librcutils.so
buffer_server: /opt/workspace/install/rmw/lib/librmw.so
buffer_server: /opt/workspace/install/tf2/lib/libtf2.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_generator_c.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/unique_identifier_msgs/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/rosidl_typesupport_cpp/lib/librosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/rosidl_typesupport_c/lib/librosidl_typesupport_c.so
buffer_server: /opt/workspace/install/rosidl_typesupport_introspection_cpp/lib/librosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/rosidl_typesupport_introspection_c/lib/librosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/rosidl_generator_c/lib/librosidl_generator_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/action_msgs/lib/libaction_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_c.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_cpp.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_fastrtps_c.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_generator_c.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_fastrtps_cpp.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_introspection_c.so
buffer_server: /opt/workspace/install/tf2_msgs/lib/libtf2_msgs__rosidl_typesupport_introspection_cpp.so
buffer_server: CMakeFiles/buffer_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/workspace/build/tf2_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable buffer_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/buffer_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/buffer_server.dir/build: buffer_server

.PHONY : CMakeFiles/buffer_server.dir/build

CMakeFiles/buffer_server.dir/requires: CMakeFiles/buffer_server.dir/src/buffer_server_main.cpp.o.requires

.PHONY : CMakeFiles/buffer_server.dir/requires

CMakeFiles/buffer_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/buffer_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/buffer_server.dir/clean

CMakeFiles/buffer_server.dir/depend:
	cd /opt/workspace/build/tf2_ros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/workspace/src/ros2/geometry2/tf2_ros /opt/workspace/src/ros2/geometry2/tf2_ros /opt/workspace/build/tf2_ros /opt/workspace/build/tf2_ros /opt/workspace/build/tf2_ros/CMakeFiles/buffer_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/buffer_server.dir/depend

