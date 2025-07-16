cmake_minimum_required(VERSION 3.5)

set(CXX_STANDART 17)

project(cTask
        VERSION 1.0.0
        LANGUAGES C CXX)

add_executable(ctask main.cpp)
target_link_directories(ctask PUBLIC taskLib)
add_subdirectory(src)