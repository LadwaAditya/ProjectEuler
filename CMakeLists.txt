cmake_minimum_required(VERSION 3.2)
project(ProjectEuler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp source/Palindrom.cpp header/Palindrom.h source/SmallestMultiple.cpp header/SmallestMultiple.h source/SumSquareDiff.cpp header/SumSquareDiff.h)
add_executable(ProjectEuler ${SOURCE_FILES} source/Multiply.cpp header/Multiply.h source/EvenFibo.cpp header/EvenFibo.h source/LargestPrime.cpp header/LargestPrime.h)