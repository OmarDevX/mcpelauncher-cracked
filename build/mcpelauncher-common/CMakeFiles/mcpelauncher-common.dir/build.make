# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/omar/Desktop/mcpelauncher-ui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/omar/Desktop/mcpelauncher-ui/build

# Include any dependencies generated for this target.
include mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/compiler_depend.make

# Include the progress variables for this target.
include mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/progress.make

# Include the compile flags for this target's objects.
include mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/flags.make

mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o: mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/flags.make
mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o: /home/omar/Desktop/mcpelauncher-ui/mcpelauncher-common/src/path_helper.cpp
mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o: mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/omar/Desktop/mcpelauncher-ui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o"
	cd /home/omar/Desktop/mcpelauncher-ui/build/mcpelauncher-common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o -MF CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o.d -o CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o -c /home/omar/Desktop/mcpelauncher-ui/mcpelauncher-common/src/path_helper.cpp

mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.i"
	cd /home/omar/Desktop/mcpelauncher-ui/build/mcpelauncher-common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omar/Desktop/mcpelauncher-ui/mcpelauncher-common/src/path_helper.cpp > CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.i

mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.s"
	cd /home/omar/Desktop/mcpelauncher-ui/build/mcpelauncher-common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omar/Desktop/mcpelauncher-ui/mcpelauncher-common/src/path_helper.cpp -o CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.s

# Object files for target mcpelauncher-common
mcpelauncher__common_OBJECTS = \
"CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o"

# External object files for target mcpelauncher-common
mcpelauncher__common_EXTERNAL_OBJECTS =

mcpelauncher-common/libmcpelauncher-common.a: mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/src/path_helper.cpp.o
mcpelauncher-common/libmcpelauncher-common.a: mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/build.make
mcpelauncher-common/libmcpelauncher-common.a: mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/omar/Desktop/mcpelauncher-ui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmcpelauncher-common.a"
	cd /home/omar/Desktop/mcpelauncher-ui/build/mcpelauncher-common && $(CMAKE_COMMAND) -P CMakeFiles/mcpelauncher-common.dir/cmake_clean_target.cmake
	cd /home/omar/Desktop/mcpelauncher-ui/build/mcpelauncher-common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mcpelauncher-common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/build: mcpelauncher-common/libmcpelauncher-common.a
.PHONY : mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/build

mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/clean:
	cd /home/omar/Desktop/mcpelauncher-ui/build/mcpelauncher-common && $(CMAKE_COMMAND) -P CMakeFiles/mcpelauncher-common.dir/cmake_clean.cmake
.PHONY : mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/clean

mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/depend:
	cd /home/omar/Desktop/mcpelauncher-ui/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/omar/Desktop/mcpelauncher-ui /home/omar/Desktop/mcpelauncher-ui/mcpelauncher-common /home/omar/Desktop/mcpelauncher-ui/build /home/omar/Desktop/mcpelauncher-ui/build/mcpelauncher-common /home/omar/Desktop/mcpelauncher-ui/build/mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : mcpelauncher-common/CMakeFiles/mcpelauncher-common.dir/depend

