# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/aliceeaster/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/171.4073.41/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/aliceeaster/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/171.4073.41/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/aliceeaster/Desktop/Advanced Programming/PA3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/PA3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PA3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PA3.dir/flags.make

CMakeFiles/PA3.dir/main.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PA3.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/main.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/main.cpp"

CMakeFiles/PA3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/main.cpp" > CMakeFiles/PA3.dir/main.cpp.i

CMakeFiles/PA3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/main.cpp" -o CMakeFiles/PA3.dir/main.cpp.s

CMakeFiles/PA3.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/main.cpp.o.requires

CMakeFiles/PA3.dir/main.cpp.o.provides: CMakeFiles/PA3.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/main.cpp.o.provides

CMakeFiles/PA3.dir/main.cpp.o.provides.build: CMakeFiles/PA3.dir/main.cpp.o


CMakeFiles/PA3.dir/ShoppingCart.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/ShoppingCart.cpp.o: ../ShoppingCart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PA3.dir/ShoppingCart.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/ShoppingCart.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/ShoppingCart.cpp"

CMakeFiles/PA3.dir/ShoppingCart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/ShoppingCart.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/ShoppingCart.cpp" > CMakeFiles/PA3.dir/ShoppingCart.cpp.i

CMakeFiles/PA3.dir/ShoppingCart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/ShoppingCart.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/ShoppingCart.cpp" -o CMakeFiles/PA3.dir/ShoppingCart.cpp.s

CMakeFiles/PA3.dir/ShoppingCart.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/ShoppingCart.cpp.o.requires

CMakeFiles/PA3.dir/ShoppingCart.cpp.o.provides: CMakeFiles/PA3.dir/ShoppingCart.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/ShoppingCart.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/ShoppingCart.cpp.o.provides

CMakeFiles/PA3.dir/ShoppingCart.cpp.o.provides.build: CMakeFiles/PA3.dir/ShoppingCart.cpp.o


CMakeFiles/PA3.dir/Beverage.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/Beverage.cpp.o: ../Beverage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PA3.dir/Beverage.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/Beverage.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Beverage.cpp"

CMakeFiles/PA3.dir/Beverage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/Beverage.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Beverage.cpp" > CMakeFiles/PA3.dir/Beverage.cpp.i

CMakeFiles/PA3.dir/Beverage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/Beverage.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Beverage.cpp" -o CMakeFiles/PA3.dir/Beverage.cpp.s

CMakeFiles/PA3.dir/Beverage.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/Beverage.cpp.o.requires

CMakeFiles/PA3.dir/Beverage.cpp.o.provides: CMakeFiles/PA3.dir/Beverage.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/Beverage.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/Beverage.cpp.o.provides

CMakeFiles/PA3.dir/Beverage.cpp.o.provides.build: CMakeFiles/PA3.dir/Beverage.cpp.o


CMakeFiles/PA3.dir/Food.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/Food.cpp.o: ../Food.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PA3.dir/Food.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/Food.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Food.cpp"

CMakeFiles/PA3.dir/Food.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/Food.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Food.cpp" > CMakeFiles/PA3.dir/Food.cpp.i

CMakeFiles/PA3.dir/Food.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/Food.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Food.cpp" -o CMakeFiles/PA3.dir/Food.cpp.s

CMakeFiles/PA3.dir/Food.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/Food.cpp.o.requires

CMakeFiles/PA3.dir/Food.cpp.o.provides: CMakeFiles/PA3.dir/Food.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/Food.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/Food.cpp.o.provides

CMakeFiles/PA3.dir/Food.cpp.o.provides.build: CMakeFiles/PA3.dir/Food.cpp.o


CMakeFiles/PA3.dir/Groceries.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/Groceries.cpp.o: ../Groceries.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PA3.dir/Groceries.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/Groceries.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Groceries.cpp"

CMakeFiles/PA3.dir/Groceries.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/Groceries.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Groceries.cpp" > CMakeFiles/PA3.dir/Groceries.cpp.i

CMakeFiles/PA3.dir/Groceries.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/Groceries.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Groceries.cpp" -o CMakeFiles/PA3.dir/Groceries.cpp.s

CMakeFiles/PA3.dir/Groceries.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/Groceries.cpp.o.requires

CMakeFiles/PA3.dir/Groceries.cpp.o.provides: CMakeFiles/PA3.dir/Groceries.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/Groceries.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/Groceries.cpp.o.provides

CMakeFiles/PA3.dir/Groceries.cpp.o.provides.build: CMakeFiles/PA3.dir/Groceries.cpp.o


CMakeFiles/PA3.dir/FruitJuice.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/FruitJuice.cpp.o: ../FruitJuice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PA3.dir/FruitJuice.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/FruitJuice.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/FruitJuice.cpp"

CMakeFiles/PA3.dir/FruitJuice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/FruitJuice.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/FruitJuice.cpp" > CMakeFiles/PA3.dir/FruitJuice.cpp.i

CMakeFiles/PA3.dir/FruitJuice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/FruitJuice.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/FruitJuice.cpp" -o CMakeFiles/PA3.dir/FruitJuice.cpp.s

CMakeFiles/PA3.dir/FruitJuice.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/FruitJuice.cpp.o.requires

CMakeFiles/PA3.dir/FruitJuice.cpp.o.provides: CMakeFiles/PA3.dir/FruitJuice.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/FruitJuice.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/FruitJuice.cpp.o.provides

CMakeFiles/PA3.dir/FruitJuice.cpp.o.provides.build: CMakeFiles/PA3.dir/FruitJuice.cpp.o


CMakeFiles/PA3.dir/Pasta.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/Pasta.cpp.o: ../Pasta.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PA3.dir/Pasta.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/Pasta.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Pasta.cpp"

CMakeFiles/PA3.dir/Pasta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/Pasta.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Pasta.cpp" > CMakeFiles/PA3.dir/Pasta.cpp.i

CMakeFiles/PA3.dir/Pasta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/Pasta.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Pasta.cpp" -o CMakeFiles/PA3.dir/Pasta.cpp.s

CMakeFiles/PA3.dir/Pasta.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/Pasta.cpp.o.requires

CMakeFiles/PA3.dir/Pasta.cpp.o.provides: CMakeFiles/PA3.dir/Pasta.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/Pasta.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/Pasta.cpp.o.provides

CMakeFiles/PA3.dir/Pasta.cpp.o.provides.build: CMakeFiles/PA3.dir/Pasta.cpp.o


CMakeFiles/PA3.dir/Chips.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/Chips.cpp.o: ../Chips.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PA3.dir/Chips.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/Chips.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Chips.cpp"

CMakeFiles/PA3.dir/Chips.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/Chips.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Chips.cpp" > CMakeFiles/PA3.dir/Chips.cpp.i

CMakeFiles/PA3.dir/Chips.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/Chips.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Chips.cpp" -o CMakeFiles/PA3.dir/Chips.cpp.s

CMakeFiles/PA3.dir/Chips.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/Chips.cpp.o.requires

CMakeFiles/PA3.dir/Chips.cpp.o.provides: CMakeFiles/PA3.dir/Chips.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/Chips.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/Chips.cpp.o.provides

CMakeFiles/PA3.dir/Chips.cpp.o.provides.build: CMakeFiles/PA3.dir/Chips.cpp.o


CMakeFiles/PA3.dir/Water.cpp.o: CMakeFiles/PA3.dir/flags.make
CMakeFiles/PA3.dir/Water.cpp.o: ../Water.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/PA3.dir/Water.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PA3.dir/Water.cpp.o -c "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Water.cpp"

CMakeFiles/PA3.dir/Water.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PA3.dir/Water.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Water.cpp" > CMakeFiles/PA3.dir/Water.cpp.i

CMakeFiles/PA3.dir/Water.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PA3.dir/Water.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aliceeaster/Desktop/Advanced Programming/PA3/Water.cpp" -o CMakeFiles/PA3.dir/Water.cpp.s

CMakeFiles/PA3.dir/Water.cpp.o.requires:

.PHONY : CMakeFiles/PA3.dir/Water.cpp.o.requires

CMakeFiles/PA3.dir/Water.cpp.o.provides: CMakeFiles/PA3.dir/Water.cpp.o.requires
	$(MAKE) -f CMakeFiles/PA3.dir/build.make CMakeFiles/PA3.dir/Water.cpp.o.provides.build
.PHONY : CMakeFiles/PA3.dir/Water.cpp.o.provides

CMakeFiles/PA3.dir/Water.cpp.o.provides.build: CMakeFiles/PA3.dir/Water.cpp.o


# Object files for target PA3
PA3_OBJECTS = \
"CMakeFiles/PA3.dir/main.cpp.o" \
"CMakeFiles/PA3.dir/ShoppingCart.cpp.o" \
"CMakeFiles/PA3.dir/Beverage.cpp.o" \
"CMakeFiles/PA3.dir/Food.cpp.o" \
"CMakeFiles/PA3.dir/Groceries.cpp.o" \
"CMakeFiles/PA3.dir/FruitJuice.cpp.o" \
"CMakeFiles/PA3.dir/Pasta.cpp.o" \
"CMakeFiles/PA3.dir/Chips.cpp.o" \
"CMakeFiles/PA3.dir/Water.cpp.o"

# External object files for target PA3
PA3_EXTERNAL_OBJECTS =

PA3: CMakeFiles/PA3.dir/main.cpp.o
PA3: CMakeFiles/PA3.dir/ShoppingCart.cpp.o
PA3: CMakeFiles/PA3.dir/Beverage.cpp.o
PA3: CMakeFiles/PA3.dir/Food.cpp.o
PA3: CMakeFiles/PA3.dir/Groceries.cpp.o
PA3: CMakeFiles/PA3.dir/FruitJuice.cpp.o
PA3: CMakeFiles/PA3.dir/Pasta.cpp.o
PA3: CMakeFiles/PA3.dir/Chips.cpp.o
PA3: CMakeFiles/PA3.dir/Water.cpp.o
PA3: CMakeFiles/PA3.dir/build.make
PA3: CMakeFiles/PA3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable PA3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PA3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PA3.dir/build: PA3

.PHONY : CMakeFiles/PA3.dir/build

CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/main.cpp.o.requires
CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/ShoppingCart.cpp.o.requires
CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/Beverage.cpp.o.requires
CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/Food.cpp.o.requires
CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/Groceries.cpp.o.requires
CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/FruitJuice.cpp.o.requires
CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/Pasta.cpp.o.requires
CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/Chips.cpp.o.requires
CMakeFiles/PA3.dir/requires: CMakeFiles/PA3.dir/Water.cpp.o.requires

.PHONY : CMakeFiles/PA3.dir/requires

CMakeFiles/PA3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PA3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PA3.dir/clean

CMakeFiles/PA3.dir/depend:
	cd "/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/aliceeaster/Desktop/Advanced Programming/PA3" "/Users/aliceeaster/Desktop/Advanced Programming/PA3" "/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug" "/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug" "/Users/aliceeaster/Desktop/Advanced Programming/PA3/cmake-build-debug/CMakeFiles/PA3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/PA3.dir/depend

