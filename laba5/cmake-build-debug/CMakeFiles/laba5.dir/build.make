# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\c5066469\Desktop\Labs\laba5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\c5066469\Desktop\Labs\laba5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\laba5.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\laba5.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\laba5.dir\flags.make

CMakeFiles\laba5.dir\main.cpp.obj: CMakeFiles\laba5.dir\flags.make
CMakeFiles\laba5.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\c5066469\Desktop\Labs\laba5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/laba5.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\laba5.dir\main.cpp.obj /FdCMakeFiles\laba5.dir\ /FS -c C:\Users\c5066469\Desktop\Labs\laba5\main.cpp
<<

CMakeFiles\laba5.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/laba5.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\laba5.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\c5066469\Desktop\Labs\laba5\main.cpp
<<

CMakeFiles\laba5.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/laba5.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\laba5.dir\main.cpp.s /c C:\Users\c5066469\Desktop\Labs\laba5\main.cpp
<<

# Object files for target laba5
laba5_OBJECTS = \
"CMakeFiles\laba5.dir\main.cpp.obj"

# External object files for target laba5
laba5_EXTERNAL_OBJECTS =

laba5.exe: CMakeFiles\laba5.dir\main.cpp.obj
laba5.exe: CMakeFiles\laba5.dir\build.make
laba5.exe: CMakeFiles\laba5.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\c5066469\Desktop\Labs\laba5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable laba5.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\laba5.dir --rc=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\laba5.dir\objects1.rsp @<<
 /out:laba5.exe /implib:laba5.lib /pdb:C:\Users\c5066469\Desktop\Labs\laba5\cmake-build-debug\laba5.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\laba5.dir\build: laba5.exe

.PHONY : CMakeFiles\laba5.dir\build

CMakeFiles\laba5.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\laba5.dir\cmake_clean.cmake
.PHONY : CMakeFiles\laba5.dir\clean

CMakeFiles\laba5.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\c5066469\Desktop\Labs\laba5 C:\Users\c5066469\Desktop\Labs\laba5 C:\Users\c5066469\Desktop\Labs\laba5\cmake-build-debug C:\Users\c5066469\Desktop\Labs\laba5\cmake-build-debug C:\Users\c5066469\Desktop\Labs\laba5\cmake-build-debug\CMakeFiles\laba5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\laba5.dir\depend

