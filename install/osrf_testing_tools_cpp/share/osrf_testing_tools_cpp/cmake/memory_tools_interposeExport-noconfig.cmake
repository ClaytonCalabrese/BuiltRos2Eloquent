#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "osrf_testing_tools_cpp::memory_tools_interpose" for configuration ""
set_property(TARGET osrf_testing_tools_cpp::memory_tools_interpose APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(osrf_testing_tools_cpp::memory_tools_interpose PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmemory_tools_interpose.so"
  IMPORTED_SONAME_NOCONFIG "libmemory_tools_interpose.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS osrf_testing_tools_cpp::memory_tools_interpose )
list(APPEND _IMPORT_CHECK_FILES_FOR_osrf_testing_tools_cpp::memory_tools_interpose "${_IMPORT_PREFIX}/lib/libmemory_tools_interpose.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
