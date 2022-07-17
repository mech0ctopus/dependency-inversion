cmake_minimum_required(VERSION 3.20)
project(dependency-inversion)

set(CMAKE_CXX_STANDARD 17)

option(LINK_PID "Whether to link pid_controller" OFF)
option(LINK_MPC "Whether to link mpc_controller" OFF)

include_directories(
        include
)

add_library(pid_controller SHARED src/pid_controller.cpp)
add_library(mpc_controller SHARED src/mpc_controller.cpp)

add_executable(naive_approach src/naive.cpp)
add_executable(di_approach src/di_approach.cpp)

if(LINK_PID)
        target_link_libraries(di_approach pid_controller)
elseif(LINK_MPC)
        target_link_libraries(di_approach mpc_controller)
else()
        target_link_libraries(di_approach pid_controller)
endif()