# Install script for directory: /opt/workspace/src/ros2/system_tests/test_quality_of_service

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/workspace/install/test_quality_of_service")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_deadline" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_deadline")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_deadline"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service" TYPE EXECUTABLE FILES "/opt/workspace/build/test_quality_of_service/test_deadline")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_deadline" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_deadline")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_deadline"
         OLD_RPATH "/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/std_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_deadline")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_lifespan" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_lifespan")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_lifespan"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service" TYPE EXECUTABLE FILES "/opt/workspace/build/test_quality_of_service/test_lifespan")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_lifespan" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_lifespan")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_lifespan"
         OLD_RPATH "/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/std_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_lifespan")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_liveliness" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_liveliness")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_liveliness"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service" TYPE EXECUTABLE FILES "/opt/workspace/build/test_quality_of_service/test_liveliness")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_liveliness" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_liveliness")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_liveliness"
         OLD_RPATH "/opt/workspace/install/rclcpp/lib:/opt/workspace/install/rcl/lib:/opt/workspace/install/rcl_interfaces/lib:/opt/workspace/install/rmw_implementation/lib:/opt/workspace/install/rmw/lib:/opt/workspace/install/rcl_logging_spdlog/lib:/opt/workspace/install/rcpputils/lib:/opt/workspace/install/rosgraph_msgs/lib:/opt/workspace/install/rcl_yaml_param_parser/lib:/opt/workspace/install/tracetools/lib:/opt/workspace/install/rcutils/lib:/opt/workspace/install/builtin_interfaces/lib:/opt/workspace/install/rosidl_typesupport_cpp/lib:/opt/workspace/install/rosidl_typesupport_c/lib:/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib:/opt/workspace/install/rosidl_typesupport_introspection_c/lib:/opt/workspace/install/rosidl_generator_c/lib:/opt/workspace/install/std_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/test_quality_of_service/test_liveliness")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/test_quality_of_service")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/test_quality_of_service")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service/environment" TYPE FILE FILES "/opt/workspace/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service/environment" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service/environment" TYPE FILE FILES "/opt/workspace/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service/environment" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/opt/workspace/build/test_quality_of_service/ament_cmake_index/share/ament_index/resource_index/packages/test_quality_of_service")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service/cmake" TYPE FILE FILES
    "/opt/workspace/build/test_quality_of_service/ament_cmake_core/test_quality_of_serviceConfig.cmake"
    "/opt/workspace/build/test_quality_of_service/ament_cmake_core/test_quality_of_serviceConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_quality_of_service" TYPE FILE FILES "/opt/workspace/src/ros2/system_tests/test_quality_of_service/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/opt/workspace/build/test_quality_of_service/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/opt/workspace/build/test_quality_of_service/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
