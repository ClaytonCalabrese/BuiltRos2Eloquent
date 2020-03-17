# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

function(check_file_hash has_hash hash_is_good)
  if("${has_hash}" STREQUAL "")
    message(FATAL_ERROR "has_hash Can't be empty")
  endif()

  if("${hash_is_good}" STREQUAL "")
    message(FATAL_ERROR "hash_is_good Can't be empty")
  endif()

  if("MD5" STREQUAL "")
    # No check
    set("${has_hash}" FALSE PARENT_SCOPE)
    set("${hash_is_good}" FALSE PARENT_SCOPE)
    return()
  endif()

  set("${has_hash}" TRUE PARENT_SCOPE)

  message(STATUS "verifying file...
       file='/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip'")

  file("MD5" "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip" actual_value)

  if(NOT "${actual_value}" STREQUAL "ec76c27ebd07d5178cbe85b773df8e62")
    set("${hash_is_good}" FALSE PARENT_SCOPE)
    message(STATUS "MD5 hash of
    /opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip
  does not match expected value
    expected: 'ec76c27ebd07d5178cbe85b773df8e62'
      actual: '${actual_value}'")
  else()
    set("${hash_is_good}" TRUE PARENT_SCOPE)
  endif()
endfunction()

function(sleep_before_download attempt)
  if(attempt EQUAL 0)
    return()
  endif()

  if(attempt EQUAL 1)
    message(STATUS "Retrying...")
    return()
  endif()

  set(sleep_seconds 0)

  if(attempt EQUAL 2)
    set(sleep_seconds 5)
  elseif(attempt EQUAL 3)
    set(sleep_seconds 5)
  elseif(attempt EQUAL 4)
    set(sleep_seconds 15)
  elseif(attempt EQUAL 5)
    set(sleep_seconds 60)
  elseif(attempt EQUAL 6)
    set(sleep_seconds 90)
  elseif(attempt EQUAL 7)
    set(sleep_seconds 300)
  else()
    set(sleep_seconds 1200)
  endif()

  message(STATUS "Retry after ${sleep_seconds} seconds (attempt #${attempt}) ...")

  execute_process(COMMAND "${CMAKE_COMMAND}" -E sleep "${sleep_seconds}")
endfunction()

if("/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if("https://github.com/jbeder/yaml-cpp/archive/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip" STREQUAL "")
  message(FATAL_ERROR "REMOTE can't be empty")
endif()

if(EXISTS "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip")
  check_file_hash(has_hash hash_is_good)
  if(has_hash)
    if(hash_is_good)
      message(STATUS "File already exists and hash match (skip download):
  file='/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip'
  MD5='ec76c27ebd07d5178cbe85b773df8e62'"
      )
      return()
    else()
      message(STATUS "File already exists but hash mismatch. Removing...")
      file(REMOVE "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip")
    endif()
  else()
    message(STATUS "File already exists but no hash specified (use URL_HASH):
  file='/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip'
Old file will be removed and new file downloaded from URL."
    )
    file(REMOVE "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip")
  endif()
endif()

set(retry_number 5)

message(STATUS "Downloading...
   dst='/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip'
   timeout='600 seconds'"
)

foreach(i RANGE ${retry_number})
  sleep_before_download(${i})

  foreach(url https://github.com/jbeder/yaml-cpp/archive/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip)
    message(STATUS "Using src='${url}'")

    
    

    file(
        DOWNLOAD
        "${url}" "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip"
        SHOW_PROGRESS
        TIMEOUT;600
        STATUS status
        LOG log
        
        
    )

    list(GET status 0 status_code)
    list(GET status 1 status_string)

    if(status_code EQUAL 0)
      check_file_hash(has_hash hash_is_good)
      if(has_hash AND NOT hash_is_good)
        message(STATUS "Hash mismatch, removing...")
        file(REMOVE "/opt/workspace/build/yaml_cpp_vendor/yaml_cpp-0f9a586-prefix/src/0f9a586ca1dc29c2ecb8dd715a315b93e3f40f79.zip")
      else()
        message(STATUS "Downloading... done")
        return()
      endif()
    else()
      string(APPEND logFailedURLs "error: downloading '${url}' failed
       status_code: ${status_code}
       status_string: ${status_string}
       log:
       --- LOG BEGIN ---
       ${log}
       --- LOG END ---
       "
      )
    endif()
  endforeach()
endforeach()

message(FATAL_ERROR "Each download failed!
  ${logFailedURLs}
  "
)