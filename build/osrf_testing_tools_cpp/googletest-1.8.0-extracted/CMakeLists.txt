# Based on recommendation on how to integrate googletest into a CMake project:
#   https://github.com/google/googletest/tree/master/googletest#incorporating-into-an-existing-cmake-project

cmake_minimum_required(VERSION 2.8.2)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  URL               "/opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/vendor/google/googletest/release-1.8.0.tar.gz"
  URL_MD5           "16877098823401d1bf2ed7891d7dce36"
  SOURCE_DIR        "${CMAKE_BINARY_DIR}/googletest-1.8.0-src"
  BINARY_DIR        "${CMAKE_BINARY_DIR}/googletest-1.8.0-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
  LOG_DOWNLOAD      OFF
  LOG_UPDATE        OFF
  LOG_CONFIGURE     OFF
  LOG_BUILD         OFF
  LOG_TEST          OFF
  LOG_INSTALL       OFF
)
