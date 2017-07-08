cmake_minimum_required(VERSION 3.7)
project(playground)

set(CMAKE_CXX_STANDARD 11)
add_compile_options(-std=c++11)

add_executable(Hello_World main.cpp weekly33.cpp)
add_executable(Shared shared.cpp)
add_executable(Shared_Play play_shared.cpp)
add_executable(weekly33 weekly33.cpp)
