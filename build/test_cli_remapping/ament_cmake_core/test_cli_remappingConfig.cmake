# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_test_cli_remapping_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED test_cli_remapping_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(test_cli_remapping_FOUND FALSE)
  elseif(NOT test_cli_remapping_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(test_cli_remapping_FOUND FALSE)
  endif()
  return()
endif()
set(_test_cli_remapping_CONFIG_INCLUDED TRUE)

# output package information
if(NOT test_cli_remapping_FIND_QUIETLY)
  message(STATUS "Found test_cli_remapping: 0.8.0 (${test_cli_remapping_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'test_cli_remapping' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(test_cli_remapping_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${test_cli_remapping_DIR}/${_extra}")
endforeach()
