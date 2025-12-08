cmake_minimum_required(VERSION 4.1)
project(ColorDisplay)

set(CMAKE_CXX_STANDARD 26)

add_library(ColorDisplay STATIC library.cpp
        ColorSelector/ColorSelectedByUser.cpp)
