# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if("/opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/vendor/google/googletest/release-1.8.0.tar.gz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/vendor/google/googletest/release-1.8.0.tar.gz")
  message(FATAL_ERROR "File not found: /opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/vendor/google/googletest/release-1.8.0.tar.gz")
endif()

if("MD5" STREQUAL "")
  message(WARNING "File will not be verified since no URL_HASH specified")
  return()
endif()

if("16877098823401d1bf2ed7891d7dce36" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(STATUS "verifying file...
     file='/opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/vendor/google/googletest/release-1.8.0.tar.gz'")

file("MD5" "/opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/vendor/google/googletest/release-1.8.0.tar.gz" actual_value)

if(NOT "${actual_value}" STREQUAL "16877098823401d1bf2ed7891d7dce36")
  message(FATAL_ERROR "error: MD5 hash of
  /opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/vendor/google/googletest/release-1.8.0.tar.gz
does not match expected value
  expected: '16877098823401d1bf2ed7891d7dce36'
    actual: '${actual_value}'
")
endif()

message(STATUS "verifying file... done")
