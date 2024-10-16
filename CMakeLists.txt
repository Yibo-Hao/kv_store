cmake_minimum_required(VERSION 3.28)
project(kv_store)

add_executable(kv_store main.cpp)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(tool)