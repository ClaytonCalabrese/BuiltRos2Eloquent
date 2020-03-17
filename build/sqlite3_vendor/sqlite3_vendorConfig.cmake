# prevent multiple inclusion
if(_sqlite3_vendor_CONFIG_INCLUDED)
  return()
endif()
set(_sqlite3_vendor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT sqlite3_vendor_FIND_QUIETLY)
  message(STATUS "Found sqlite3_vendor:  (${sqlite3_vendor_DIR})")
endif()

# add the local Modules directory to the modules path, so FindSQLite3.cmake is considered.
list(INSERT CMAKE_MODULE_PATH 0 "${sqlite3_vendor_DIR}/Modules")
