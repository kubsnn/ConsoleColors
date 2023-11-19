cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Colors)

# Add the include directory to the include paths
include_directories(../include)

# Add the source files to the executable
add_executable(example main.cpp)

