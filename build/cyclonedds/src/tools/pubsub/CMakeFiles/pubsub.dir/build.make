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
CMAKE_SOURCE_DIR = /opt/workspace/src/eclipse-cyclonedds/cyclonedds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/workspace/build/cyclonedds

# Include any dependencies generated for this target.
include src/tools/pubsub/CMakeFiles/pubsub.dir/depend.make

# Include the progress variables for this target.
include src/tools/pubsub/CMakeFiles/pubsub.dir/progress.make

# Include the compile flags for this target's objects.
include src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o: src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make
src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o: /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/pubsub.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/cyclonedds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pubsub.dir/pubsub.c.o   -c /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/pubsub.c

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pubsub.dir/pubsub.c.i"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/pubsub.c > CMakeFiles/pubsub.dir/pubsub.c.i

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pubsub.dir/pubsub.c.s"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/pubsub.c -o CMakeFiles/pubsub.dir/pubsub.c.s

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o.requires:

.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o.requires

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o.provides: src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o.requires
	$(MAKE) -f src/tools/pubsub/CMakeFiles/pubsub.dir/build.make src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o.provides.build
.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o.provides

src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o.provides.build: src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o


src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o: src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make
src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o: /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/cyclonedds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pubsub.dir/common.c.o   -c /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/common.c

src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pubsub.dir/common.c.i"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/common.c > CMakeFiles/pubsub.dir/common.c.i

src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pubsub.dir/common.c.s"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/common.c -o CMakeFiles/pubsub.dir/common.c.s

src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o.requires:

.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o.requires

src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o.provides: src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o.requires
	$(MAKE) -f src/tools/pubsub/CMakeFiles/pubsub.dir/build.make src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o.provides.build
.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o.provides

src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o.provides.build: src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o


src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o: src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make
src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o: /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/testtype.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/cyclonedds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pubsub.dir/testtype.c.o   -c /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/testtype.c

src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pubsub.dir/testtype.c.i"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/testtype.c > CMakeFiles/pubsub.dir/testtype.c.i

src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pubsub.dir/testtype.c.s"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/testtype.c -o CMakeFiles/pubsub.dir/testtype.c.s

src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o.requires:

.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o.requires

src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o.provides: src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o.requires
	$(MAKE) -f src/tools/pubsub/CMakeFiles/pubsub.dir/build.make src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o.provides.build
.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o.provides

src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o.provides.build: src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o


src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o: src/tools/pubsub/CMakeFiles/pubsub.dir/flags.make
src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o: /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/porting.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/workspace/build/cyclonedds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pubsub.dir/porting.c.o   -c /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/porting.c

src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pubsub.dir/porting.c.i"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/porting.c > CMakeFiles/pubsub.dir/porting.c.i

src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pubsub.dir/porting.c.s"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub/porting.c -o CMakeFiles/pubsub.dir/porting.c.s

src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o.requires:

.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o.requires

src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o.provides: src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o.requires
	$(MAKE) -f src/tools/pubsub/CMakeFiles/pubsub.dir/build.make src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o.provides.build
.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o.provides

src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o.provides.build: src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o


# Object files for target pubsub
pubsub_OBJECTS = \
"CMakeFiles/pubsub.dir/pubsub.c.o" \
"CMakeFiles/pubsub.dir/common.c.o" \
"CMakeFiles/pubsub.dir/testtype.c.o" \
"CMakeFiles/pubsub.dir/porting.c.o"

# External object files for target pubsub
pubsub_EXTERNAL_OBJECTS =

bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/build.make
bin/pubsub: lib/libddsc.so.0.1.0
bin/pubsub: src/tools/pubsub/CMakeFiles/pubsub.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/workspace/build/cyclonedds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable ../../../bin/pubsub"
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pubsub.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/tools/pubsub/CMakeFiles/pubsub.dir/build: bin/pubsub

.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/build

src/tools/pubsub/CMakeFiles/pubsub.dir/requires: src/tools/pubsub/CMakeFiles/pubsub.dir/pubsub.c.o.requires
src/tools/pubsub/CMakeFiles/pubsub.dir/requires: src/tools/pubsub/CMakeFiles/pubsub.dir/common.c.o.requires
src/tools/pubsub/CMakeFiles/pubsub.dir/requires: src/tools/pubsub/CMakeFiles/pubsub.dir/testtype.c.o.requires
src/tools/pubsub/CMakeFiles/pubsub.dir/requires: src/tools/pubsub/CMakeFiles/pubsub.dir/porting.c.o.requires

.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/requires

src/tools/pubsub/CMakeFiles/pubsub.dir/clean:
	cd /opt/workspace/build/cyclonedds/src/tools/pubsub && $(CMAKE_COMMAND) -P CMakeFiles/pubsub.dir/cmake_clean.cmake
.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/clean

src/tools/pubsub/CMakeFiles/pubsub.dir/depend:
	cd /opt/workspace/build/cyclonedds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/workspace/src/eclipse-cyclonedds/cyclonedds /opt/workspace/src/eclipse-cyclonedds/cyclonedds/src/tools/pubsub /opt/workspace/build/cyclonedds /opt/workspace/build/cyclonedds/src/tools/pubsub /opt/workspace/build/cyclonedds/src/tools/pubsub/CMakeFiles/pubsub.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/tools/pubsub/CMakeFiles/pubsub.dir/depend
