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
CMAKE_SOURCE_DIR = C:\Users\c5066469\Desktop\reposit\Labs\lab4_a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\lab4_a.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\lab4_a.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\lab4_a.dir\flags.make

CMakeFiles\lab4_a.dir\main.cpp.obj: CMakeFiles\lab4_a.dir\flags.make
CMakeFiles\lab4_a.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab4_a.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab4_a.dir\main.cpp.obj /FdCMakeFiles\lab4_a.dir\ /FS -c C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\main.cpp
<<

CMakeFiles\lab4_a.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4_a.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\lab4_a.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\main.cpp
<<

CMakeFiles\lab4_a.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4_a.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab4_a.dir\main.cpp.s /c C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\main.cpp
<<

# Object files for target lab4_a
lab4_a_OBJECTS = \
"CMakeFiles\lab4_a.dir\main.cpp.obj"

# External object files for target lab4_a
lab4_a_EXTERNAL_OBJECTS =

lab4_a.exe: CMakeFiles\lab4_a.dir\main.cpp.obj
lab4_a.exe: CMakeFiles\lab4_a.dir\build.make
lab4_a.exe: CMakeFiles\lab4_a.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab4_a.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\lab4_a.dir --rc=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\lab4_a.dir\objects1.rsp @<<
 /out:lab4_a.exe /implib:lab4_a.lib /pdb:C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\cmake-build-debug\lab4_a.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\lab4_a.dir\build: lab4_a.exe

.PHONY : CMakeFiles\lab4_a.dir\build

CMakeFiles\lab4_a.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab4_a.dir\cmake_clean.cmake
.PHONY : CMakeFiles\lab4_a.dir\clean

CMakeFiles\lab4_a.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\c5066469\Desktop\reposit\Labs\lab4_a C:\Users\c5066469\Desktop\reposit\Labs\lab4_a C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\cmake-build-debug C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\cmake-build-debug C:\Users\c5066469\Desktop\reposit\Labs\lab4_a\cmake-build-debug\CMakeFiles\lab4_a.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\lab4_a.dir\depend

