cmake_minimum_required(VERSION 3.17)
project(lab6Class)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
add_subdirectory(src)
include_directories(src)
file(GLOB tests "test/*.cpp")
add_executable(lab6Class ${tests})

target_link_libraries(lab6Class src gtest gtest_main)