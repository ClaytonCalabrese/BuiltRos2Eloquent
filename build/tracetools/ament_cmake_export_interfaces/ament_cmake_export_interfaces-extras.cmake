# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "tracetools_export")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${tracetools_DIR}/${_interface}Export.cmake")
    list(APPEND tracetools_INTERFACES "tracetools::${_interface}")
  endforeach()
endif()
