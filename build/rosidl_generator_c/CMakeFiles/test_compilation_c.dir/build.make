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
CMAKE_SOURCE_DIR = /opt/workspace/src/ros2/rosidl/rosidl_generator_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/workspace/build/rosidl_generator_c

# Include any dependencies generated for this target.
include CMakeFiles/test_compilation_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_compilation_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_compilation_c.dir/flags.make

CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o: CMakeFiles/test_compilation_c.dir/flags.make
CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o: /opt/workspace/src/ros2/rosidl/rosidl_generator_c/test/test_compilation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/rosidl_generator_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o   -c /opt/workspace/src/ros2/rosidl/rosidl_generator_c/test/test_compilation.c

CMakeFiles/test_compilation_c.dir/test/test_compilation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_compilation_c.dir/test/test_compilation.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/workspace/src/ros2/rosidl/rosidl_generator_c/test/test_compilation.c > CMakeFiles/test_compilation_c.dir/test/test_compilation.c.i

CMakeFiles/test_compilation_c.dir/test/test_compilation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_compilation_c.dir/test/test_compilation.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/workspace/src/ros2/rosidl/rosidl_generator_c/test/test_compilation.c -o CMakeFiles/test_compilation_c.dir/test/test_compilation.c.s

CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o.requires:

.PHONY : CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o.requires

CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o.provides: CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o.requires
	$(MAKE) -f CMakeFiles/test_compilation_c.dir/build.make CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o.provides.build
.PHONY : CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o.provides

CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o.provides.build: CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o


CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o: CMakeFiles/test_compilation_c.dir/flags.make
CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o: /opt/workspace/src/ros2/rosidl/rosidl_generator_c/test/separate_compilation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/rosidl_generator_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o   -c /opt/workspace/src/ros2/rosidl/rosidl_generator_c/test/separate_compilation.c

CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/workspace/src/ros2/rosidl/rosidl_generator_c/test/separate_compilation.c > CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.i

CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/workspace/src/ros2/rosidl/rosidl_generator_c/test/separate_compilation.c -o CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.s

CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o.requires:

.PHONY : CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o.requires

CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o.provides: CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o.requires
	$(MAKE) -f CMakeFiles/test_compilation_c.dir/build.make CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o.provides.build
.PHONY : CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o.provides

CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o.provides.build: CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o


# Object files for target test_compilation_c
test_compilation_c_OBJECTS = \
"CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o" \
"CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o"

# External object files for target test_compilation_c
test_compilation_c_EXTERNAL_OBJECTS =

test_compilation_c: CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o
test_compilation_c: CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o
test_compilation_c: CMakeFiles/test_compilation_c.dir/build.make
test_compilation_c: librosidl_generator_c_interfaces__rosidl_generator_c.so
test_compilation_c: librosidl_generator_c.so
test_compilation_c: CMakeFiles/test_compilation_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/workspace/build/rosidl_generator_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test_compilation_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_compilation_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_compilation_c.dir/build: test_compilation_c

.PHONY : CMakeFiles/test_compilation_c.dir/build

CMakeFiles/test_compilation_c.dir/requires: CMakeFiles/test_compilation_c.dir/test/test_compilation.c.o.requires
CMakeFiles/test_compilation_c.dir/requires: CMakeFiles/test_compilation_c.dir/test/separate_compilation.c.o.requires

.PHONY : CMakeFiles/test_compilation_c.dir/requires

CMakeFiles/test_compilation_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_compilation_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_compilation_c.dir/clean

CMakeFiles/test_compilation_c.dir/depend:
	cd /opt/workspace/build/rosidl_generator_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/workspace/src/ros2/rosidl/rosidl_generator_c /opt/workspace/src/ros2/rosidl/rosidl_generator_c /opt/workspace/build/rosidl_generator_c /opt/workspace/build/rosidl_generator_c /opt/workspace/build/rosidl_generator_c/CMakeFiles/test_compilation_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_compilation_c.dir/depend

