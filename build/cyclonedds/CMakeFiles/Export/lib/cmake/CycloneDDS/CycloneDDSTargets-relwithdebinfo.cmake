#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "CycloneDDS::ddsc" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::ddsc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::ddsc PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libddsc.so.0.1.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libddsc.so.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::ddsc )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::ddsc "${_IMPORT_PREFIX}/lib/libddsc.so.0.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
