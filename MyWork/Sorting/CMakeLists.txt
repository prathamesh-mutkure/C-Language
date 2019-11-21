cmake_minimum_required(VERSION 3.14)
project(Sorting C)

set(CMAKE_C_STANDARD 11)

add_executable(Sorting main.c bubble.c sort.h selection.c insertion.c)