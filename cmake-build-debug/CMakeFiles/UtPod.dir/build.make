# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = "C:\Users\willworthington\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\willworthington\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\willworthington\CLionProjects\UtPod

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\UtPod.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\UtPod.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\UtPod.dir\flags.make

CMakeFiles\UtPod.dir\UtPodDriver.cpp.obj: CMakeFiles\UtPod.dir\flags.make
CMakeFiles\UtPod.dir\UtPodDriver.cpp.obj: ..\UtPodDriver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UtPod.dir/UtPodDriver.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\UtPod.dir\UtPodDriver.cpp.obj /FdCMakeFiles\UtPod.dir\ /FS -c C:\Users\willworthington\CLionProjects\UtPod\UtPodDriver.cpp
<<

CMakeFiles\UtPod.dir\UtPodDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UtPod.dir/UtPodDriver.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe > CMakeFiles\UtPod.dir\UtPodDriver.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\willworthington\CLionProjects\UtPod\UtPodDriver.cpp
<<

CMakeFiles\UtPod.dir\UtPodDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UtPod.dir/UtPodDriver.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\UtPod.dir\UtPodDriver.cpp.s /c C:\Users\willworthington\CLionProjects\UtPod\UtPodDriver.cpp
<<

CMakeFiles\UtPod.dir\Song.cpp.obj: CMakeFiles\UtPod.dir\flags.make
CMakeFiles\UtPod.dir\Song.cpp.obj: ..\Song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/UtPod.dir/Song.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\UtPod.dir\Song.cpp.obj /FdCMakeFiles\UtPod.dir\ /FS -c C:\Users\willworthington\CLionProjects\UtPod\Song.cpp
<<

CMakeFiles\UtPod.dir\Song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UtPod.dir/Song.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe > CMakeFiles\UtPod.dir\Song.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\willworthington\CLionProjects\UtPod\Song.cpp
<<

CMakeFiles\UtPod.dir\Song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UtPod.dir/Song.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\UtPod.dir\Song.cpp.s /c C:\Users\willworthington\CLionProjects\UtPod\Song.cpp
<<

CMakeFiles\UtPod.dir\UtPod.cpp.obj: CMakeFiles\UtPod.dir\flags.make
CMakeFiles\UtPod.dir\UtPod.cpp.obj: ..\UtPod.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/UtPod.dir/UtPod.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\UtPod.dir\UtPod.cpp.obj /FdCMakeFiles\UtPod.dir\ /FS -c C:\Users\willworthington\CLionProjects\UtPod\UtPod.cpp
<<

CMakeFiles\UtPod.dir\UtPod.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UtPod.dir/UtPod.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe > CMakeFiles\UtPod.dir\UtPod.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\willworthington\CLionProjects\UtPod\UtPod.cpp
<<

CMakeFiles\UtPod.dir\UtPod.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UtPod.dir/UtPod.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\UtPod.dir\UtPod.cpp.s /c C:\Users\willworthington\CLionProjects\UtPod\UtPod.cpp
<<

# Object files for target UtPod
UtPod_OBJECTS = \
"CMakeFiles\UtPod.dir\UtPodDriver.cpp.obj" \
"CMakeFiles\UtPod.dir\Song.cpp.obj" \
"CMakeFiles\UtPod.dir\UtPod.cpp.obj"

# External object files for target UtPod
UtPod_EXTERNAL_OBJECTS =

UtPod.exe: CMakeFiles\UtPod.dir\UtPodDriver.cpp.obj
UtPod.exe: CMakeFiles\UtPod.dir\Song.cpp.obj
UtPod.exe: CMakeFiles\UtPod.dir\UtPod.cpp.obj
UtPod.exe: CMakeFiles\UtPod.dir\build.make
UtPod.exe: CMakeFiles\UtPod.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable UtPod.exe"
	"C:\Users\willworthington\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\UtPod.dir --manifests  -- C:\PROGRA~2\MICROS~3\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\UtPod.dir\objects1.rsp @<<
 /out:UtPod.exe /implib:UtPod.lib /pdb:C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug\UtPod.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\UtPod.dir\build: UtPod.exe

.PHONY : CMakeFiles\UtPod.dir\build

CMakeFiles\UtPod.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UtPod.dir\cmake_clean.cmake
.PHONY : CMakeFiles\UtPod.dir\clean

CMakeFiles\UtPod.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\willworthington\CLionProjects\UtPod C:\Users\willworthington\CLionProjects\UtPod C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug C:\Users\willworthington\CLionProjects\UtPod\cmake-build-debug\CMakeFiles\UtPod.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\UtPod.dir\depend

