cmake_minimum_required(VERSION 3.23)
project(CalcLibrary)

set(CMAKE_CXX_STANDARD 14)

add_executable(CalcLibrary main.cpp CalcLib.h CalcLib.cpp)
