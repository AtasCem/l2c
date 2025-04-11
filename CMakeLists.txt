# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(L2C VERSION 1.0 LANGUAGES CXX)

# define the CXX standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add compile options
add_compile_options(-Wall -Wextra -pedantic)

# Define build types
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# add executables and assign source files
add_executable(L2C src/main.cpp src/student.cpp)

# add the include directories
target_include_directories(L2C PUBLIC include)