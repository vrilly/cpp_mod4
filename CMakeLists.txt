cmake_minimum_required(VERSION 3.17)
project(cpp_mod4)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -std=c++98 -g -fcoverage-mapping -fprofile-instr-generate")

add_subdirectory(ex00)
add_subdirectory(ex01)
add_subdirectory(ex02)
add_subdirectory(ex03)