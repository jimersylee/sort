cmake_minimum_required(VERSION 3.6)
project(C__test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BubbleSort.cpp quickSort.cpp exchangeSort.cpp)
add_executable(C__test ${SOURCE_FILES})