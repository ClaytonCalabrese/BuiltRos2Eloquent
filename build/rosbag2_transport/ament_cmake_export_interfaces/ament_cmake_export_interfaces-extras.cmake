# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "export_rosbag2_transport")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${rosbag2_transport_DIR}/${_interface}Export.cmake")
    list(APPEND rosbag2_transport_INTERFACES "rosbag2_transport::${_interface}")
  endforeach()
endif()
