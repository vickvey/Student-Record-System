# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/vivek/Desktop/Student-Record-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vivek/Desktop/Student-Record-System/build

# Include any dependencies generated for this target.
include CMakeFiles/target_exec.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/target_exec.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/target_exec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/target_exec.dir/flags.make

CMakeFiles/target_exec.dir/src/main.c.o: CMakeFiles/target_exec.dir/flags.make
CMakeFiles/target_exec.dir/src/main.c.o: ../src/main.c
CMakeFiles/target_exec.dir/src/main.c.o: CMakeFiles/target_exec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vivek/Desktop/Student-Record-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/target_exec.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/target_exec.dir/src/main.c.o -MF CMakeFiles/target_exec.dir/src/main.c.o.d -o CMakeFiles/target_exec.dir/src/main.c.o -c /home/vivek/Desktop/Student-Record-System/src/main.c

CMakeFiles/target_exec.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/target_exec.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vivek/Desktop/Student-Record-System/src/main.c > CMakeFiles/target_exec.dir/src/main.c.i

CMakeFiles/target_exec.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/target_exec.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vivek/Desktop/Student-Record-System/src/main.c -o CMakeFiles/target_exec.dir/src/main.c.s

CMakeFiles/target_exec.dir/src/dynarray.c.o: CMakeFiles/target_exec.dir/flags.make
CMakeFiles/target_exec.dir/src/dynarray.c.o: ../src/dynarray.c
CMakeFiles/target_exec.dir/src/dynarray.c.o: CMakeFiles/target_exec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vivek/Desktop/Student-Record-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/target_exec.dir/src/dynarray.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/target_exec.dir/src/dynarray.c.o -MF CMakeFiles/target_exec.dir/src/dynarray.c.o.d -o CMakeFiles/target_exec.dir/src/dynarray.c.o -c /home/vivek/Desktop/Student-Record-System/src/dynarray.c

CMakeFiles/target_exec.dir/src/dynarray.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/target_exec.dir/src/dynarray.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vivek/Desktop/Student-Record-System/src/dynarray.c > CMakeFiles/target_exec.dir/src/dynarray.c.i

CMakeFiles/target_exec.dir/src/dynarray.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/target_exec.dir/src/dynarray.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vivek/Desktop/Student-Record-System/src/dynarray.c -o CMakeFiles/target_exec.dir/src/dynarray.c.s

CMakeFiles/target_exec.dir/src/student.c.o: CMakeFiles/target_exec.dir/flags.make
CMakeFiles/target_exec.dir/src/student.c.o: ../src/student.c
CMakeFiles/target_exec.dir/src/student.c.o: CMakeFiles/target_exec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vivek/Desktop/Student-Record-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/target_exec.dir/src/student.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/target_exec.dir/src/student.c.o -MF CMakeFiles/target_exec.dir/src/student.c.o.d -o CMakeFiles/target_exec.dir/src/student.c.o -c /home/vivek/Desktop/Student-Record-System/src/student.c

CMakeFiles/target_exec.dir/src/student.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/target_exec.dir/src/student.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vivek/Desktop/Student-Record-System/src/student.c > CMakeFiles/target_exec.dir/src/student.c.i

CMakeFiles/target_exec.dir/src/student.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/target_exec.dir/src/student.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vivek/Desktop/Student-Record-System/src/student.c -o CMakeFiles/target_exec.dir/src/student.c.s

CMakeFiles/target_exec.dir/src/studentdata.c.o: CMakeFiles/target_exec.dir/flags.make
CMakeFiles/target_exec.dir/src/studentdata.c.o: ../src/studentdata.c
CMakeFiles/target_exec.dir/src/studentdata.c.o: CMakeFiles/target_exec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vivek/Desktop/Student-Record-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/target_exec.dir/src/studentdata.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/target_exec.dir/src/studentdata.c.o -MF CMakeFiles/target_exec.dir/src/studentdata.c.o.d -o CMakeFiles/target_exec.dir/src/studentdata.c.o -c /home/vivek/Desktop/Student-Record-System/src/studentdata.c

CMakeFiles/target_exec.dir/src/studentdata.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/target_exec.dir/src/studentdata.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vivek/Desktop/Student-Record-System/src/studentdata.c > CMakeFiles/target_exec.dir/src/studentdata.c.i

CMakeFiles/target_exec.dir/src/studentdata.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/target_exec.dir/src/studentdata.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vivek/Desktop/Student-Record-System/src/studentdata.c -o CMakeFiles/target_exec.dir/src/studentdata.c.s

CMakeFiles/target_exec.dir/src/constants.c.o: CMakeFiles/target_exec.dir/flags.make
CMakeFiles/target_exec.dir/src/constants.c.o: ../src/constants.c
CMakeFiles/target_exec.dir/src/constants.c.o: CMakeFiles/target_exec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vivek/Desktop/Student-Record-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/target_exec.dir/src/constants.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/target_exec.dir/src/constants.c.o -MF CMakeFiles/target_exec.dir/src/constants.c.o.d -o CMakeFiles/target_exec.dir/src/constants.c.o -c /home/vivek/Desktop/Student-Record-System/src/constants.c

CMakeFiles/target_exec.dir/src/constants.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/target_exec.dir/src/constants.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vivek/Desktop/Student-Record-System/src/constants.c > CMakeFiles/target_exec.dir/src/constants.c.i

CMakeFiles/target_exec.dir/src/constants.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/target_exec.dir/src/constants.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vivek/Desktop/Student-Record-System/src/constants.c -o CMakeFiles/target_exec.dir/src/constants.c.s

# Object files for target target_exec
target_exec_OBJECTS = \
"CMakeFiles/target_exec.dir/src/main.c.o" \
"CMakeFiles/target_exec.dir/src/dynarray.c.o" \
"CMakeFiles/target_exec.dir/src/student.c.o" \
"CMakeFiles/target_exec.dir/src/studentdata.c.o" \
"CMakeFiles/target_exec.dir/src/constants.c.o"

# External object files for target target_exec
target_exec_EXTERNAL_OBJECTS =

target_exec: CMakeFiles/target_exec.dir/src/main.c.o
target_exec: CMakeFiles/target_exec.dir/src/dynarray.c.o
target_exec: CMakeFiles/target_exec.dir/src/student.c.o
target_exec: CMakeFiles/target_exec.dir/src/studentdata.c.o
target_exec: CMakeFiles/target_exec.dir/src/constants.c.o
target_exec: CMakeFiles/target_exec.dir/build.make
target_exec: CMakeFiles/target_exec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vivek/Desktop/Student-Record-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable target_exec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/target_exec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/target_exec.dir/build: target_exec
.PHONY : CMakeFiles/target_exec.dir/build

CMakeFiles/target_exec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/target_exec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/target_exec.dir/clean

CMakeFiles/target_exec.dir/depend:
	cd /home/vivek/Desktop/Student-Record-System/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vivek/Desktop/Student-Record-System /home/vivek/Desktop/Student-Record-System /home/vivek/Desktop/Student-Record-System/build /home/vivek/Desktop/Student-Record-System/build /home/vivek/Desktop/Student-Record-System/build/CMakeFiles/target_exec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/target_exec.dir/depend
