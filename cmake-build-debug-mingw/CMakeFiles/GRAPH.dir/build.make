# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\cmake-build-debug-mingw

# Include any dependencies generated for this target.
include CMakeFiles/GRAPH.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GRAPH.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GRAPH.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GRAPH.dir/flags.make

CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.obj: CMakeFiles/GRAPH.dir/flags.make
CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.obj: CMakeFiles/GRAPH.dir/includes_C.rsp
CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.obj: ../MyIgraph/src/mygraph.c
CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.obj: CMakeFiles/GRAPH.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.obj -MF CMakeFiles\GRAPH.dir\MyIgraph\src\mygraph.c.obj.d -o CMakeFiles\GRAPH.dir\MyIgraph\src\mygraph.c.obj -c C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\MyIgraph\src\mygraph.c

CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\MyIgraph\src\mygraph.c > CMakeFiles\GRAPH.dir\MyIgraph\src\mygraph.c.i

CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\MyIgraph\src\mygraph.c -o CMakeFiles\GRAPH.dir\MyIgraph\src\mygraph.c.s

CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.obj: CMakeFiles/GRAPH.dir/flags.make
CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.obj: CMakeFiles/GRAPH.dir/includes_C.rsp
CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.obj: ../MyIgraph/src/queue.c
CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.obj: CMakeFiles/GRAPH.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.obj -MF CMakeFiles\GRAPH.dir\MyIgraph\src\queue.c.obj.d -o CMakeFiles\GRAPH.dir\MyIgraph\src\queue.c.obj -c C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\MyIgraph\src\queue.c

CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\MyIgraph\src\queue.c > CMakeFiles\GRAPH.dir\MyIgraph\src\queue.c.i

CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\MyIgraph\src\queue.c -o CMakeFiles\GRAPH.dir\MyIgraph\src\queue.c.s

CMakeFiles/GRAPH.dir/TEST/bai2.c.obj: CMakeFiles/GRAPH.dir/flags.make
CMakeFiles/GRAPH.dir/TEST/bai2.c.obj: CMakeFiles/GRAPH.dir/includes_C.rsp
CMakeFiles/GRAPH.dir/TEST/bai2.c.obj: ../TEST/bai2.c
CMakeFiles/GRAPH.dir/TEST/bai2.c.obj: CMakeFiles/GRAPH.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/GRAPH.dir/TEST/bai2.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/GRAPH.dir/TEST/bai2.c.obj -MF CMakeFiles\GRAPH.dir\TEST\bai2.c.obj.d -o CMakeFiles\GRAPH.dir\TEST\bai2.c.obj -c C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\TEST\bai2.c

CMakeFiles/GRAPH.dir/TEST/bai2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GRAPH.dir/TEST/bai2.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\TEST\bai2.c > CMakeFiles\GRAPH.dir\TEST\bai2.c.i

CMakeFiles/GRAPH.dir/TEST/bai2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GRAPH.dir/TEST/bai2.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\TEST\bai2.c -o CMakeFiles\GRAPH.dir\TEST\bai2.c.s

# Object files for target GRAPH
GRAPH_OBJECTS = \
"CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.obj" \
"CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.obj" \
"CMakeFiles/GRAPH.dir/TEST/bai2.c.obj"

# External object files for target GRAPH
GRAPH_EXTERNAL_OBJECTS =

GRAPH.exe: CMakeFiles/GRAPH.dir/MyIgraph/src/mygraph.c.obj
GRAPH.exe: CMakeFiles/GRAPH.dir/MyIgraph/src/queue.c.obj
GRAPH.exe: CMakeFiles/GRAPH.dir/TEST/bai2.c.obj
GRAPH.exe: CMakeFiles/GRAPH.dir/build.make
GRAPH.exe: libfdr/libfdr.a
GRAPH.exe: CMakeFiles/GRAPH.dir/linklibs.rsp
GRAPH.exe: CMakeFiles/GRAPH.dir/objects1.rsp
GRAPH.exe: CMakeFiles/GRAPH.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable GRAPH.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GRAPH.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GRAPH.dir/build: GRAPH.exe
.PHONY : CMakeFiles/GRAPH.dir/build

CMakeFiles/GRAPH.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GRAPH.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GRAPH.dir/clean

CMakeFiles/GRAPH.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\cmake-build-debug-mingw C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\cmake-build-debug-mingw C:\Users\nguye\Downloads\GRAPH-20220111T074821Z-001\GRAPH\cmake-build-debug-mingw\CMakeFiles\GRAPH.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GRAPH.dir/depend

