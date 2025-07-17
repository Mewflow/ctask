# src/CMakeLists.txt
add_library(taskLib STATIC Task.cpp)
target_include_directories(taskLib PUBLIC ${CMAKE_SOURCE_DIR}/inc)

add_library(taskManagerLib STATIC TaskManager.cpp)
target_include_directories(taskManagerLib PUBLIC ${CMAKE_SOURCE_DIR}/inc)
