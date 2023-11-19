# FILEPATH: /home/kubs/Desktop/Colors/CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

project(Colors)

# Add the include directory to the include paths
include_directories(include)

# Add the source files to the executable
add_executable(Colors example/main.cpp)

# Add the header file to the source files
target_sources(Colors PRIVATE include/color.hpp)
