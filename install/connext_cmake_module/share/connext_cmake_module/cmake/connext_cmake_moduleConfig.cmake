# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_connext_cmake_module_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED connext_cmake_module_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(connext_cmake_module_FOUND FALSE)
  elseif(NOT connext_cmake_module_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(connext_cmake_module_FOUND FALSE)
  endif()
  return()
endif()
set(_connext_cmake_module_CONFIG_INCLUDED TRUE)

# output package information
if(NOT connext_cmake_module_FIND_QUIETLY)
  message(STATUS "Found connext_cmake_module: 0.8.4 (${connext_cmake_module_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'connext_cmake_module' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(connext_cmake_module_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "connext_cmake_module-extras.cmake")
foreach(_extra ${_extras})
  include("${connext_cmake_module_DIR}/${_extra}")
endforeach()
