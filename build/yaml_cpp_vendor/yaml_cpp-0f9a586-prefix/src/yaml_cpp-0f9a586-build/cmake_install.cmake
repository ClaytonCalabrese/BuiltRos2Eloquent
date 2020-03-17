# Install script for directory: /opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp_install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp.so.0.6.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp.so.0.6"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/libyaml-cpp.so.0.6.2"
    "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/libyaml-cpp.so.0.6"
    "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/libyaml-cpp.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp.so.0.6.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp.so.0.6"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yaml-cpp" TYPE DIRECTORY FILES "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586/include/yaml-cpp/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/yaml-cpp" TYPE FILE FILES
    "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/CMakeFiles/yaml-cpp-config.cmake"
    "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/yaml-cpp-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/yaml-cpp/yaml-cpp-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/yaml-cpp/yaml-cpp-targets.cmake"
         "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/CMakeFiles/Export/lib/cmake/yaml-cpp/yaml-cpp-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/yaml-cpp/yaml-cpp-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/yaml-cpp/yaml-cpp-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/yaml-cpp" TYPE FILE FILES "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/CMakeFiles/Export/lib/cmake/yaml-cpp/yaml-cpp-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/yaml-cpp" TYPE FILE FILES "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/CMakeFiles/Export/lib/cmake/yaml-cpp/yaml-cpp-targets-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/yaml-cpp.pc")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/yaml_cpp-0f9a586-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
