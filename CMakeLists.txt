cmake_minimum_required(VERSION 3.20)
project(dependency-inversion)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        include
)

add_executable(naive_approach src/naive.cpp)
add_executable(di_approach src/di_approach.cpp)