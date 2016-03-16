cmake_minimum_required(VERSION 3.2)
project(ProjectEuler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ProjectEuler ${SOURCE_FILES} Multiply.cpp header/Multiply.h EvenFibo.cpp header/EvenFibo.h LargestPrime.cpp header/LargestPrime.h)