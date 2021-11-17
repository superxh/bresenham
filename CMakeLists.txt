cmake_minimum_required(VERSION 3.10)

project(bresenham)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(bresenham bresenham.cxx)

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
