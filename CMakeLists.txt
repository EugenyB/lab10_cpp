cmake_minimum_required(VERSION 3.7)
project(lab10)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Stack.cpp Stack.h)
add_executable(lab10 ${SOURCE_FILES})