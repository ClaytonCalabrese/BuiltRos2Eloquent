# prevent multiple inclusion
if(_tinyxml2_vendor_CONFIG_INCLUDED)
  return()
endif()
set(_tinyxml2_vendor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tinyxml2_vendor_FIND_QUIETLY)
  message(STATUS "Found tinyxml2_vendor:  (${tinyxml2_vendor_DIR})")
endif()

# add the local Modules directory to the modules path
list(INSERT CMAKE_MODULE_PATH 0 "${tinyxml2_vendor_DIR}/Modules")
