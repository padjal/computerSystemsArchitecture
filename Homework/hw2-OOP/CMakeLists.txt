cmake_minimum_required(VERSION 3.20)
project(hw2_OOP)

set(CMAKE_CXX_STANDARD 14)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(SOURCE_FILES
        #Headers
        animal.h
        fish.h
        bird.h
        beast.h
        rnd.h
        container.h
        habitatEnum.h
        beastEnum.h

        #Sources
        animal.cpp
        main.cpp
        fish.cpp
        container.cpp
        beast.cpp
        bird.cpp)

add_executable(OOP ${SOURCE_FILES})
