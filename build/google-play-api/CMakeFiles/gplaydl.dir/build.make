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
include google-play-api/CMakeFiles/gplaydl.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include google-play-api/CMakeFiles/gplaydl.dir/compiler_depend.make

# Include the progress variables for this target.
include google-play-api/CMakeFiles/gplaydl.dir/progress.make

# Include the compile flags for this target's objects.
include google-play-api/CMakeFiles/gplaydl.dir/flags.make

google-play-api/CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o: google-play-api/CMakeFiles/gplaydl.dir/flags.make
google-play-api/CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o: /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/gplaydl.cpp
google-play-api/CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o: google-play-api/CMakeFiles/gplaydl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/omar/Desktop/mcpelauncher-ui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object google-play-api/CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT google-play-api/CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o -MF CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o.d -o CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o -c /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/gplaydl.cpp

google-play-api/CMakeFiles/gplaydl.dir/src/gplaydl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gplaydl.dir/src/gplaydl.cpp.i"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/gplaydl.cpp > CMakeFiles/gplaydl.dir/src/gplaydl.cpp.i

google-play-api/CMakeFiles/gplaydl.dir/src/gplaydl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gplaydl.dir/src/gplaydl.cpp.s"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/gplaydl.cpp -o CMakeFiles/gplaydl.dir/src/gplaydl.cpp.s

google-play-api/CMakeFiles/gplaydl.dir/src/common.cpp.o: google-play-api/CMakeFiles/gplaydl.dir/flags.make
google-play-api/CMakeFiles/gplaydl.dir/src/common.cpp.o: /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/common.cpp
google-play-api/CMakeFiles/gplaydl.dir/src/common.cpp.o: google-play-api/CMakeFiles/gplaydl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/omar/Desktop/mcpelauncher-ui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object google-play-api/CMakeFiles/gplaydl.dir/src/common.cpp.o"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT google-play-api/CMakeFiles/gplaydl.dir/src/common.cpp.o -MF CMakeFiles/gplaydl.dir/src/common.cpp.o.d -o CMakeFiles/gplaydl.dir/src/common.cpp.o -c /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/common.cpp

google-play-api/CMakeFiles/gplaydl.dir/src/common.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gplaydl.dir/src/common.cpp.i"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/common.cpp > CMakeFiles/gplaydl.dir/src/common.cpp.i

google-play-api/CMakeFiles/gplaydl.dir/src/common.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gplaydl.dir/src/common.cpp.s"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/common.cpp -o CMakeFiles/gplaydl.dir/src/common.cpp.s

google-play-api/CMakeFiles/gplaydl.dir/src/config.cpp.o: google-play-api/CMakeFiles/gplaydl.dir/flags.make
google-play-api/CMakeFiles/gplaydl.dir/src/config.cpp.o: /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/config.cpp
google-play-api/CMakeFiles/gplaydl.dir/src/config.cpp.o: google-play-api/CMakeFiles/gplaydl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/omar/Desktop/mcpelauncher-ui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object google-play-api/CMakeFiles/gplaydl.dir/src/config.cpp.o"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT google-play-api/CMakeFiles/gplaydl.dir/src/config.cpp.o -MF CMakeFiles/gplaydl.dir/src/config.cpp.o.d -o CMakeFiles/gplaydl.dir/src/config.cpp.o -c /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/config.cpp

google-play-api/CMakeFiles/gplaydl.dir/src/config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gplaydl.dir/src/config.cpp.i"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/config.cpp > CMakeFiles/gplaydl.dir/src/config.cpp.i

google-play-api/CMakeFiles/gplaydl.dir/src/config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gplaydl.dir/src/config.cpp.s"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omar/Desktop/mcpelauncher-ui/google-play-api/src/config.cpp -o CMakeFiles/gplaydl.dir/src/config.cpp.s

# Object files for target gplaydl
gplaydl_OBJECTS = \
"CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o" \
"CMakeFiles/gplaydl.dir/src/common.cpp.o" \
"CMakeFiles/gplaydl.dir/src/config.cpp.o"

# External object files for target gplaydl
gplaydl_EXTERNAL_OBJECTS =

google-play-api/gplaydl: google-play-api/CMakeFiles/gplaydl.dir/src/gplaydl.cpp.o
google-play-api/gplaydl: google-play-api/CMakeFiles/gplaydl.dir/src/common.cpp.o
google-play-api/gplaydl: google-play-api/CMakeFiles/gplaydl.dir/src/config.cpp.o
google-play-api/gplaydl: google-play-api/CMakeFiles/gplaydl.dir/build.make
google-play-api/gplaydl: google-play-api/libgplayapi.a
google-play-api/gplaydl: /usr/lib/x86_64-linux-gnu/libcurl.so
google-play-api/gplaydl: /usr/lib/x86_64-linux-gnu/libz.so
google-play-api/gplaydl: /usr/lib/x86_64-linux-gnu/libprotobuf.so
google-play-api/gplaydl: google-play-api/CMakeFiles/gplaydl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/omar/Desktop/mcpelauncher-ui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable gplaydl"
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gplaydl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
google-play-api/CMakeFiles/gplaydl.dir/build: google-play-api/gplaydl
.PHONY : google-play-api/CMakeFiles/gplaydl.dir/build

google-play-api/CMakeFiles/gplaydl.dir/clean:
	cd /home/omar/Desktop/mcpelauncher-ui/build/google-play-api && $(CMAKE_COMMAND) -P CMakeFiles/gplaydl.dir/cmake_clean.cmake
.PHONY : google-play-api/CMakeFiles/gplaydl.dir/clean

google-play-api/CMakeFiles/gplaydl.dir/depend:
	cd /home/omar/Desktop/mcpelauncher-ui/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/omar/Desktop/mcpelauncher-ui /home/omar/Desktop/mcpelauncher-ui/google-play-api /home/omar/Desktop/mcpelauncher-ui/build /home/omar/Desktop/mcpelauncher-ui/build/google-play-api /home/omar/Desktop/mcpelauncher-ui/build/google-play-api/CMakeFiles/gplaydl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : google-play-api/CMakeFiles/gplaydl.dir/depend

