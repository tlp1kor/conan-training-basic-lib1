cmake_minimum_required(VERSION 3.10)
project(addition_lib)

add_library(addition_lib src/add.cpp)
find_package(spdlog REQUIRED)  # Find fmt package
target_link_libraries(addition_lib spdlog::spdlog )  # Link fmt to your library
target_include_directories(addition_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
