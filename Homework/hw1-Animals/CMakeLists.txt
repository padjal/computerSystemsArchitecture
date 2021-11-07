cmake_minimum_required(VERSION 3.5)
project(HW1_Animals CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

set(SOURCE_FILES
        #Headers
        animal.h
        fish.h
        bird.h
        beast.h
        rnd.h
        container.h

        #Sources
        animal.cpp
        main.cpp
        fish.cpp
        container.cpp
        beast.cpp
        bird.cpp)

add_executable(Animals ${SOURCE_FILES})
