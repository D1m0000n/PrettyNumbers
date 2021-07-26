cmake_minimum_required(VERSION 3.16)
project(codeforses)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")

set(
        SOURCES

        solution.h
        solution.cpp

        main.h
        main.cpp
)

add_executable(codeforses ${SOURCES})