cmake_minimum_required(VERSION 3.30)
if (POLICY CMP0025)
    cmake_policy(SET CMP0025 NEW)
endif ()
project(learningCplusplus)

set(CMAKE_CXX_STANDARD 23)

add_executable(learningCplusplus main.cpp
        library/functions.h
        library/functions.cpp
        library/basics.cpp
        library/basics.h
        library/pointer.cpp
        library/pointer.h
        library/idiot.cpp
        library/idiot.h)