# cmake_minimum_required(VERSION <specify CMake version here>)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp base_package/bodies/equation.cpp base_package/headers/equation.h base_package/bodies/hypothese.cpp base_package/headers/hypothese.h base_package/bodies/mySystem.cpp base_package/headers/mySystem.h)