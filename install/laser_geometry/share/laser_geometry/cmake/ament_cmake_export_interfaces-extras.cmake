# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "laser_geometry")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${laser_geometry_DIR}/${_interface}Export.cmake")
    list(APPEND laser_geometry_INTERFACES "laser_geometry::${_interface}")
  endforeach()
endif()
