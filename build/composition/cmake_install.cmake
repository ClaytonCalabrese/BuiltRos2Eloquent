# Install script for directory: /opt/workspace/src/ros2/demos/composition

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/workspace/install/composition")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition/environment" TYPE FILE FILES "/opt/workspace/install/ament_package/lib/python3.6/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition/environment" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtalker_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtalker_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtalker_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/opt/workspace/build/composition/libtalker_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtalker_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtalker_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtalker_component.so"
         OLD_RPATH "/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/class_loader/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/std_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtalker_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblistener_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblistener_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblistener_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/opt/workspace/build/composition/liblistener_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblistener_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblistener_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblistener_component.so"
         OLD_RPATH "/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/class_loader/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/std_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblistener_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_like_listener_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_like_listener_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_like_listener_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/opt/workspace/build/composition/libnode_like_listener_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_like_listener_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_like_listener_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_like_listener_component.so"
         OLD_RPATH "/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/class_loader/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/std_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_like_listener_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserver_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserver_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserver_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/opt/workspace/build/composition/libserver_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserver_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserver_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserver_component.so"
         OLD_RPATH "/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/example_interfaces/lib:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/class_loader/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserver_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclient_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclient_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclient_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/opt/workspace/build/composition/libclient_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclient_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclient_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclient_component.so"
         OLD_RPATH "/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/example_interfaces/lib:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/class_loader/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclient_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/manual_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/manual_composition")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/manual_composition"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/composition" TYPE EXECUTABLE FILES "/opt/workspace/build/composition/manual_composition")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/manual_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/manual_composition")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/manual_composition"
         OLD_RPATH "/opt/workspace/build/composition:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/std_msgs/lib:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/example_interfaces/lib:/opt/workspace/install/class_loader/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/manual_composition")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/linktime_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/linktime_composition")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/linktime_composition"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/composition" TYPE EXECUTABLE FILES "/opt/workspace/build/composition/linktime_composition")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/linktime_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/linktime_composition")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/linktime_composition"
         OLD_RPATH "/opt/workspace/build/composition:/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/class_loader/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/std_msgs/lib:/opt/workspace/install/unique_identifier_msgs/lib:/opt/workspace/install/action_msgs/lib:/opt/workspace/install/example_interfaces/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/linktime_composition")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/dlopen_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/dlopen_composition")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/dlopen_composition"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/composition" TYPE EXECUTABLE FILES "/opt/workspace/build/composition/dlopen_composition")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/dlopen_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/dlopen_composition")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/dlopen_composition"
         OLD_RPATH "/opt/workspace/install/console_bridge_vendor/lib:/opt/workspace/install/class_loader/lib:/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/composition/dlopen_composition")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition" TYPE DIRECTORY FILES "/opt/workspace/src/ros2/demos/composition/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/composition")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/composition")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition/environment" TYPE FILE FILES "/opt/workspace/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition/environment" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition/environment" TYPE FILE FILES "/opt/workspace/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition/environment" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_index/share/ament_index/resource_index/packages/composition")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rclcpp_components" TYPE FILE FILES "/opt/workspace/build/composition/ament_cmake_index/share/ament_index/resource_index/rclcpp_components/composition")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition/cmake" TYPE FILE FILES
    "/opt/workspace/build/composition/ament_cmake_core/compositionConfig.cmake"
    "/opt/workspace/build/composition/ament_cmake_core/compositionConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/composition" TYPE FILE FILES "/opt/workspace/src/ros2/demos/composition/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/opt/workspace/build/composition/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")