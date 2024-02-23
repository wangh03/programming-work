cmake_minimum_required(VERSION 3.27)
project(CLion_Workspace)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLion_Workspace main.cpp
        Objective.cpp
        Objective.h
        PyResult.cpp
        PyResult.h
        Result.cpp
        Result.h)
