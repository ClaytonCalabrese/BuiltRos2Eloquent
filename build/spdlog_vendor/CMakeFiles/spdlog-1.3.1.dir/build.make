# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /opt/workspace/src/ros2/spdlog_vendor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/workspace/build/spdlog_vendor

# Utility rule file for spdlog-1.3.1.

# Include the progress variables for this target.
include CMakeFiles/spdlog-1.3.1.dir/progress.make

CMakeFiles/spdlog-1.3.1: CMakeFiles/spdlog-1.3.1-complete


CMakeFiles/spdlog-1.3.1-complete: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-install
CMakeFiles/spdlog-1.3.1-complete: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-mkdir
CMakeFiles/spdlog-1.3.1-complete: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-download
CMakeFiles/spdlog-1.3.1-complete: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-update
CMakeFiles/spdlog-1.3.1-complete: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-patch
CMakeFiles/spdlog-1.3.1-complete: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-configure
CMakeFiles/spdlog-1.3.1-complete: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-build
CMakeFiles/spdlog-1.3.1-complete: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/workspace/build/spdlog_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'spdlog-1.3.1'"
	/usr/bin/cmake -E make_directory /opt/workspace/build/spdlog_vendor/CMakeFiles
	/usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/CMakeFiles/spdlog-1.3.1-complete
	/usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-done

spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-install: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/workspace/build/spdlog_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing install step for 'spdlog-1.3.1'"
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-build && $(MAKE) install
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-build && /usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-install

spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/workspace/build/spdlog_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'spdlog-1.3.1'"
	/usr/bin/cmake -E make_directory /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1
	/usr/bin/cmake -E make_directory /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-build
	/usr/bin/cmake -E make_directory /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix
	/usr/bin/cmake -E make_directory /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/tmp
	/usr/bin/cmake -E make_directory /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp
	/usr/bin/cmake -E make_directory /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src
	/usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-mkdir

spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-download: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-urlinfo.txt
spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-download: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/workspace/build/spdlog_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (download, verify and extract) for 'spdlog-1.3.1'"
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src && /usr/bin/cmake -P /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/download-spdlog-1.3.1.cmake
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src && /usr/bin/cmake -P /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/verify-spdlog-1.3.1.cmake
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src && /usr/bin/cmake -P /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/extract-spdlog-1.3.1.cmake
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src && /usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-download

spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-update: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/workspace/build/spdlog_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No update step for 'spdlog-1.3.1'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-update

spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-patch: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/workspace/build/spdlog_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'spdlog-1.3.1'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-patch

spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-configure: spdlog-1.3.1-prefix/tmp/spdlog-1.3.1-cfgcmd.txt
spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-configure: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-update
spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-configure: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/workspace/build/spdlog_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing configure step for 'spdlog-1.3.1'"
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-build && /usr/bin/cmake -DCMAKE_INSTALL_PREFIX=/opt/workspace/build/spdlog_vendor/spdlog_vendor_install -DCMAKE_BUILD_TYPE= -DCMAKE_CXX_COMPILER=/usr/bin/c++ -DCMAKE_CXX_FLAGS= -DSPDLOG_BUILD_BENCH=OFF -DSPDLOG_BUILD_TESTS=OFF -DSPDLOG_BUILD_EXAMPLES=OFF -Wno-dev "-GUnix Makefiles" /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-build && /usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-configure

spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-build: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/opt/workspace/build/spdlog_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing build step for 'spdlog-1.3.1'"
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-build && $(MAKE)
	cd /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-build && /usr/bin/cmake -E touch /opt/workspace/build/spdlog_vendor/spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-build

spdlog-1.3.1: CMakeFiles/spdlog-1.3.1
spdlog-1.3.1: CMakeFiles/spdlog-1.3.1-complete
spdlog-1.3.1: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-install
spdlog-1.3.1: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-mkdir
spdlog-1.3.1: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-download
spdlog-1.3.1: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-update
spdlog-1.3.1: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-patch
spdlog-1.3.1: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-configure
spdlog-1.3.1: spdlog-1.3.1-prefix/src/spdlog-1.3.1-stamp/spdlog-1.3.1-build
spdlog-1.3.1: CMakeFiles/spdlog-1.3.1.dir/build.make

.PHONY : spdlog-1.3.1

# Rule to build all files generated by this target.
CMakeFiles/spdlog-1.3.1.dir/build: spdlog-1.3.1

.PHONY : CMakeFiles/spdlog-1.3.1.dir/build

CMakeFiles/spdlog-1.3.1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/spdlog-1.3.1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/spdlog-1.3.1.dir/clean

CMakeFiles/spdlog-1.3.1.dir/depend:
	cd /opt/workspace/build/spdlog_vendor && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/workspace/src/ros2/spdlog_vendor /opt/workspace/src/ros2/spdlog_vendor /opt/workspace/build/spdlog_vendor /opt/workspace/build/spdlog_vendor /opt/workspace/build/spdlog_vendor/CMakeFiles/spdlog-1.3.1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/spdlog-1.3.1.dir/depend

