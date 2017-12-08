cmake_minimum_required(VERSION 3.9)
project(playground)

set(CMAKE_CXX_STANDARD 11)

add_executable(shared shared.cpp)

add_executable(weekly33 weekly33.cpp)

add_executable(weekly65 weekly65.cpp)

add_executable(play_shared play_shared.cpp)

#TODO fix this better way to write this
add_executable(sale
        include/Sales_item.h
        src/Sales_item.cpp
        sale.cpp
)
