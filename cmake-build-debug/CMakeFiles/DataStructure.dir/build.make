# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\program\CLion\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\program\CLion\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLionProject\DataStructure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLionProject\DataStructure\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DataStructure.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DataStructure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataStructure.dir/flags.make

CMakeFiles/DataStructure.dir/main.cpp.obj: CMakeFiles/DataStructure.dir/flags.make
CMakeFiles/DataStructure.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataStructure.dir/main.cpp.obj"
	D:\program\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DataStructure.dir\main.cpp.obj -c D:\CLionProject\DataStructure\main.cpp

CMakeFiles/DataStructure.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataStructure.dir/main.cpp.i"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProject\DataStructure\main.cpp > CMakeFiles\DataStructure.dir\main.cpp.i

CMakeFiles/DataStructure.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataStructure.dir/main.cpp.s"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProject\DataStructure\main.cpp -o CMakeFiles\DataStructure.dir\main.cpp.s

CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.obj: CMakeFiles/DataStructure.dir/flags.make
CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.obj: ../linkedlist/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.obj"
	D:\program\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DataStructure.dir\linkedlist\Node.cpp.obj -c D:\CLionProject\DataStructure\linkedlist\Node.cpp

CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.i"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProject\DataStructure\linkedlist\Node.cpp > CMakeFiles\DataStructure.dir\linkedlist\Node.cpp.i

CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.s"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProject\DataStructure\linkedlist\Node.cpp -o CMakeFiles\DataStructure.dir\linkedlist\Node.cpp.s

CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.obj: CMakeFiles/DataStructure.dir/flags.make
CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.obj: ../linkedlist/LinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.obj"
	D:\program\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DataStructure.dir\linkedlist\LinkedList.cpp.obj -c D:\CLionProject\DataStructure\linkedlist\LinkedList.cpp

CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.i"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProject\DataStructure\linkedlist\LinkedList.cpp > CMakeFiles\DataStructure.dir\linkedlist\LinkedList.cpp.i

CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.s"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProject\DataStructure\linkedlist\LinkedList.cpp -o CMakeFiles\DataStructure.dir\linkedlist\LinkedList.cpp.s

CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.obj: CMakeFiles/DataStructure.dir/flags.make
CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.obj: ../stack/ArrayStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.obj"
	D:\program\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DataStructure.dir\stack\ArrayStack.cpp.obj -c D:\CLionProject\DataStructure\stack\ArrayStack.cpp

CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.i"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProject\DataStructure\stack\ArrayStack.cpp > CMakeFiles\DataStructure.dir\stack\ArrayStack.cpp.i

CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.s"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProject\DataStructure\stack\ArrayStack.cpp -o CMakeFiles\DataStructure.dir\stack\ArrayStack.cpp.s

CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.obj: CMakeFiles/DataStructure.dir/flags.make
CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.obj: ../stack/LinkedStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.obj"
	D:\program\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DataStructure.dir\stack\LinkedStack.cpp.obj -c D:\CLionProject\DataStructure\stack\LinkedStack.cpp

CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.i"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProject\DataStructure\stack\LinkedStack.cpp > CMakeFiles\DataStructure.dir\stack\LinkedStack.cpp.i

CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.s"
	D:\program\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProject\DataStructure\stack\LinkedStack.cpp -o CMakeFiles\DataStructure.dir\stack\LinkedStack.cpp.s

# Object files for target DataStructure
DataStructure_OBJECTS = \
"CMakeFiles/DataStructure.dir/main.cpp.obj" \
"CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.obj" \
"CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.obj" \
"CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.obj" \
"CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.obj"

# External object files for target DataStructure
DataStructure_EXTERNAL_OBJECTS =

DataStructure.exe: CMakeFiles/DataStructure.dir/main.cpp.obj
DataStructure.exe: CMakeFiles/DataStructure.dir/linkedlist/Node.cpp.obj
DataStructure.exe: CMakeFiles/DataStructure.dir/linkedlist/LinkedList.cpp.obj
DataStructure.exe: CMakeFiles/DataStructure.dir/stack/ArrayStack.cpp.obj
DataStructure.exe: CMakeFiles/DataStructure.dir/stack/LinkedStack.cpp.obj
DataStructure.exe: CMakeFiles/DataStructure.dir/build.make
DataStructure.exe: CMakeFiles/DataStructure.dir/linklibs.rsp
DataStructure.exe: CMakeFiles/DataStructure.dir/objects1.rsp
DataStructure.exe: CMakeFiles/DataStructure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable DataStructure.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DataStructure.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataStructure.dir/build: DataStructure.exe

.PHONY : CMakeFiles/DataStructure.dir/build

CMakeFiles/DataStructure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DataStructure.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DataStructure.dir/clean

CMakeFiles/DataStructure.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProject\DataStructure D:\CLionProject\DataStructure D:\CLionProject\DataStructure\cmake-build-debug D:\CLionProject\DataStructure\cmake-build-debug D:\CLionProject\DataStructure\cmake-build-debug\CMakeFiles\DataStructure.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DataStructure.dir/depend

