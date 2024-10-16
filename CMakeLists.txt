cmake_minimum_required(VERSION 3.27)
project(KvStore)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KvStore main.cpp)

add_subdirectory(lib)
add_subdirectory(test)
add_subdirectory(tool)
add_subdirectory(third-party)