# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "resource_retriever")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${resource_retriever_DIR}/${_interface}Export.cmake")
    list(APPEND resource_retriever_INTERFACES "resource_retriever::${_interface}")
  endforeach()
endif()
