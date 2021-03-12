cmake_minimum_required(VERSION 2.8)
# CMake 编译版本为发型 ， 使用C++14
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-std=c++14 -O3")

project(initialization)


add_executable(Demo main.cpp)