cmake_minimum_required(VERSION 3.16)

project(ekf)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

add_subdirectory(source)
