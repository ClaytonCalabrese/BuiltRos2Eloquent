# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget laser_geometry::laser_geometry)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target laser_geometry::laser_geometry
add_library(laser_geometry::laser_geometry SHARED IMPORTED)

set_target_properties(laser_geometry::laser_geometry PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include;/usr/include/eigen3;/opt/workspace/install/rclcpp/include;/opt/workspace/install/tf2/include;/opt/workspace/install/sensor_msgs/include;/opt/workspace/install/rcl/include;/opt/workspace/install/geometry_msgs/include;/opt/workspace/install/std_msgs/include;/opt/workspace/install/rosgraph_msgs/include;/opt/workspace/install/rcl_interfaces/include;/opt/workspace/install/builtin_interfaces/include;/opt/workspace/install/rosidl_typesupport_cpp/include;/opt/workspace/install/rosidl_typesupport_c/include;/opt/workspace/install/rosidl_typesupport_introspection_cpp/include;/opt/workspace/install/rosidl_typesupport_introspection_c/include;/opt/workspace/install/rosidl_generator_cpp/include;/opt/workspace/install/rmw/include;/opt/workspace/install/rosidl_generator_c/include;/opt/workspace/install/rcpputils/include;/opt/workspace/install/rcl_yaml_param_parser/include;/opt/workspace/install/rcl_logging_spdlog/include;/opt/workspace/install/rcutils/include;/opt/workspace/install/tracetools/include;/opt/workspace/install/rosidl_typesupport_interface/include;/opt/workspace/install/console_bridge_vendor/include;${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "/opt/workspace/install/rclcpp/lib/librclcpp.so;/opt/workspace/install/rcl/lib/librcl.so;/opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_c.so;/opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_cpp.so;/opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so;/opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_generator_c.so;/opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so;/opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so;/opt/workspace/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so;-lpthread;/opt/workspace/install/rmw_implementation/lib/librmw_implementation.so;/opt/workspace/install/rmw/lib/librmw.so;/opt/workspace/install/rcutils/lib/librcutils.so;/opt/workspace/install/rcl_logging_spdlog/lib/librcl_logging_spdlog.so;/opt/workspace/install/rcpputils/lib/librcpputils.so;/opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_cpp.so;/opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_c.so;/opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so;/opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_generator_c.so;/opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so;/opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so;/opt/workspace/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so;/opt/workspace/install/rcl_yaml_param_parser/lib/librcl_yaml_param_parser.so;/opt/workspace/install/tracetools/lib/libtracetools.so;/opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_c.so;/opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_cpp.so;/opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so;/opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_generator_c.so;/opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so;/opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so;/opt/workspace/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so;/opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_c.so;/opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so;/opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so;/opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_generator_c.so;/opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so;/opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so;/opt/workspace/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so;/opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_cpp.so;/opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_c.so;/opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so;/opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_generator_c.so;/opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_introspection_c.so;/opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so;/opt/workspace/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so;/opt/workspace/install/rosidl_typesupport_cpp/lib/librosidl_typesupport_cpp.so;/opt/workspace/install/rosidl_typesupport_c/lib/librosidl_typesupport_c.so;/opt/workspace/install/rosidl_typesupport_introspection_cpp/lib/librosidl_typesupport_introspection_cpp.so;/opt/workspace/install/rosidl_typesupport_introspection_c/lib/librosidl_typesupport_introspection_c.so;/opt/workspace/install/rosidl_generator_c/lib/librosidl_generator_c.so;/opt/workspace/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_cpp.so;/opt/workspace/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_c.so;/opt/workspace/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so;/opt/workspace/install/sensor_msgs/lib/libsensor_msgs__rosidl_generator_c.so;/opt/workspace/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so;/opt/workspace/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_fastrtps_c.so;/opt/workspace/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_fastrtps_cpp.so;console_bridge;/opt/workspace/install/tf2/lib/libtf2.so"
)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/laser_geometryExport-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
