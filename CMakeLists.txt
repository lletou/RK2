cmake_minimum_required(VERSION 3.22)
project(rk2)
set(CMAKE_CXX_STANDARD 14)



add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/third-party/gtest" "gtest")
add_library(tree STATIC tree.cpp)

add_executable(rk ${CMAKE_CURRENT_SOURCE_DIR}/tests/test.cpp)

if (COVERAGE)
    target_compile_options(rk PRIVATE --coverage)
    target_link_libraries(rk PRIVATE --coverage)
endif()

target_link_libraries(rk PRIVATE gtest gtest_main tree)
