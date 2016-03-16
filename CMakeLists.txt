cmake_minimum_required(VERSION 3.2)
project(ProjectEuler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ProjectEuler ${SOURCE_FILES} class/Multiply.cpp header/Multiply.h class/EvenFibo.cpp header/EvenFibo.h class/LargestPrime.cpp header/LargestPrime.h)