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
CMAKE_COMMAND = "C:\App\Clion\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\App\Clion\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CodeRepos\luogu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CodeRepos\luogu\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/luogu.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/luogu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/luogu.dir/flags.make

CMakeFiles/luogu.dir/P1177.cpp.obj: CMakeFiles/luogu.dir/flags.make
CMakeFiles/luogu.dir/P1177.cpp.obj: ../P1177.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CodeRepos\luogu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/luogu.dir/P1177.cpp.obj"
	C:\App\MingW64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\luogu.dir\P1177.cpp.obj -c C:\CodeRepos\luogu\P1177.cpp

CMakeFiles/luogu.dir/P1177.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/luogu.dir/P1177.cpp.i"
	C:\App\MingW64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CodeRepos\luogu\P1177.cpp > CMakeFiles\luogu.dir\P1177.cpp.i

CMakeFiles/luogu.dir/P1177.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/luogu.dir/P1177.cpp.s"
	C:\App\MingW64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CodeRepos\luogu\P1177.cpp -o CMakeFiles\luogu.dir\P1177.cpp.s

# Object files for target luogu
luogu_OBJECTS = \
"CMakeFiles/luogu.dir/P1177.cpp.obj"

# External object files for target luogu
luogu_EXTERNAL_OBJECTS =

luogu.exe: CMakeFiles/luogu.dir/P1177.cpp.obj
luogu.exe: CMakeFiles/luogu.dir/build.make
luogu.exe: CMakeFiles/luogu.dir/linklibs.rsp
luogu.exe: CMakeFiles/luogu.dir/objects1.rsp
luogu.exe: CMakeFiles/luogu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CodeRepos\luogu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable luogu.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\luogu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/luogu.dir/build: luogu.exe

.PHONY : CMakeFiles/luogu.dir/build

CMakeFiles/luogu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\luogu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/luogu.dir/clean

CMakeFiles/luogu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CodeRepos\luogu C:\CodeRepos\luogu C:\CodeRepos\luogu\cmake-build-debug C:\CodeRepos\luogu\cmake-build-debug C:\CodeRepos\luogu\cmake-build-debug\CMakeFiles\luogu.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/luogu.dir/depend

