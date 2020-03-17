# Install script for directory: /opt/workspace/src/ros2/geometry2/tf2_ros

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/workspace/install/tf2_ros")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/environment" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/environment" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.6/site-packages/tf2_ros" TYPE DIRECTORY FILES "/opt/workspace/src/ros2/geometry2/tf2_ros/src/tf2_ros/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/opt/workspace/install/tf2_ros/lib/python3.6/site-packages/tf2_ros"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtf2_ros.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtf2_ros.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtf2_ros.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/opt/workspace/build/tf2_ros/libtf2_ros.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtf2_ros.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtf2_ros.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtf2_ros.so"
         OLD_RPATH "/opt/workspace/install/message_filters/lib:/opt/workspace/install/rclcpp_action/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_action/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/tf2/lib:/opt/workspace/install/std_msgs/lib:/opt/workspace/install/geometry_msgs/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/tf2_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtf2_ros.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/buffer_server" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/buffer_server")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/buffer_server"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/tf2_ros" TYPE EXECUTABLE FILES "/opt/workspace/build/tf2_ros/buffer_server")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/buffer_server" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/buffer_server")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/buffer_server"
         OLD_RPATH "/opt/workspace/build/tf2_ros:/opt/workspace/install/rclcpp_action/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_action/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/tf2/lib:/opt/workspace/install/std_msgs/lib:/opt/workspace/install/geometry_msgs/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/tf2_msgs/lib:/opt/workspace/install/message_filters/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/buffer_server")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/static_transform_publisher" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/static_transform_publisher")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/static_transform_publisher"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/tf2_ros" TYPE EXECUTABLE FILES "/opt/workspace/build/tf2_ros/static_transform_publisher")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/static_transform_publisher" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/static_transform_publisher")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/static_transform_publisher"
         OLD_RPATH "/opt/workspace/build/tf2_ros:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/std_msgs/lib:/opt/workspace/install/geometry_msgs/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/tf2_msgs/lib:/opt/workspace/install/message_filters/lib:/opt/workspace/install/rclcpp_action/lib:/opt/workspace/install/rcl_action/lib:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/tf2/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/static_transform_publisher")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_echo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_echo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_echo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/tf2_ros" TYPE EXECUTABLE FILES "/opt/workspace/build/tf2_ros/tf2_echo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_echo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_echo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_echo"
         OLD_RPATH "/opt/workspace/build/tf2_ros:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/message_filters/lib:/opt/workspace/install/rclcpp_action/lib:/opt/workspace/install/rcl_action/lib:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/tf2/lib:/opt/workspace/install/std_msgs/lib:/opt/workspace/install/geometry_msgs/lib:/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/tf2_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_echo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_monitor" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_monitor")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_monitor"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/tf2_ros" TYPE EXECUTABLE FILES "/opt/workspace/build/tf2_ros/tf2_monitor")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_monitor" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_monitor")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_monitor"
         OLD_RPATH "/opt/workspace/build/tf2_ros:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/std_msgs/lib:/opt/workspace/install/geometry_msgs/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/tf2_msgs/lib:/opt/workspace/install/message_filters/lib:/opt/workspace/install/rclcpp_action/lib:/opt/workspace/install/rcl_action/lib:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/tf2/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/tf2_ros/tf2_monitor")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tf2_ros" TYPE DIRECTORY FILES "/opt/workspace/src/ros2/geometry2/tf2_ros/include/tf2_ros/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/environment" TYPE FILE FILES "/opt/workspace/install/ament_package/lib/python3.6/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/environment" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/tf2_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/tf2_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/environment" TYPE FILE FILES "/opt/workspace/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/environment" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/environment" TYPE FILE FILES "/opt/workspace/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/environment" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_index/share/ament_index/resource_index/packages/tf2_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/cmake" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/cmake" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/cmake" TYPE FILE FILES "/opt/workspace/build/tf2_ros/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros/cmake" TYPE FILE FILES
    "/opt/workspace/build/tf2_ros/ament_cmake_core/tf2_rosConfig.cmake"
    "/opt/workspace/build/tf2_ros/ament_cmake_core/tf2_rosConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tf2_ros" TYPE FILE FILES "/opt/workspace/src/ros2/geometry2/tf2_ros/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/opt/workspace/build/tf2_ros/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/opt/workspace/build/tf2_ros/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
