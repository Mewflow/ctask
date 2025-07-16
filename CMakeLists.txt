cmake_minimum_required(VERSION 3.5)

project(cTask VERSION 1.0.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(ctask main.cpp)

target_link_libraries(ctask PRIVATE taskLib)

target_include_directories(ctask PRIVATE ${CMAKE_SOURCE_DIR}/inc)
