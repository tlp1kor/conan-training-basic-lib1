cmake_minimum_required(VERSION 3.10)
project(addition_lib)

add_library(addition_lib src/add.cpp)
target_include_directories(addition_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
