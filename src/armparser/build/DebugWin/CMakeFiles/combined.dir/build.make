# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = C:\Users\Prodigy\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.6668.126\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Prodigy\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.6668.126\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\MyStuff\PrivateProjects\CPPProjects\ArmSimulator\src\armparser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\MyStuff\PrivateProjects\CPPProjects\ArmSimulator\src\armparser\build\DebugWin

# Utility rule file for combined.

# Include the progress variables for this target.
include CMakeFiles/combined.dir/progress.make

CMakeFiles/combined:
	"<CMAKE_AR> qc <TARGET> <LINK_FLAGS> <OBJECTS>" libcombined.a H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/build/DebugWin/antlr4_runtime/src/antlr4_runtime/runtime/Cpp/dist/libantlr4-runtime.a H:/MyStuff/PrivateProjects/CPPProjects/ArmSimulator/src/armparser/build/DebugWin/libArmLib.a

combined: CMakeFiles/combined
combined: CMakeFiles/combined.dir/build.make

.PHONY : combined

# Rule to build all files generated by this target.
CMakeFiles/combined.dir/build: combined

.PHONY : CMakeFiles/combined.dir/build

CMakeFiles/combined.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\combined.dir\cmake_clean.cmake
.PHONY : CMakeFiles/combined.dir/clean

CMakeFiles/combined.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\MyStuff\PrivateProjects\CPPProjects\ArmSimulator\src\armparser H:\MyStuff\PrivateProjects\CPPProjects\ArmSimulator\src\armparser H:\MyStuff\PrivateProjects\CPPProjects\ArmSimulator\src\armparser\build\DebugWin H:\MyStuff\PrivateProjects\CPPProjects\ArmSimulator\src\armparser\build\DebugWin H:\MyStuff\PrivateProjects\CPPProjects\ArmSimulator\src\armparser\build\DebugWin\CMakeFiles\combined.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/combined.dir/depend
