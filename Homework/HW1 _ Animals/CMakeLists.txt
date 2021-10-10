cmake_minimum_required(VERSION 3.20)
project(HW1_Animals CXX)

set(CMAKE_CXX_STANDARD 14)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(SOURCE_FILES
        #Headers
        animal.h
        fish.h
        bird.h

        #Sources
        animal.cpp
        main.cpp
)

add_executable(Animals ${SOURCE_FILES})
