cmake_minimum_required(VERSION 3.15)
project(hw3new)

set(CMAKE_CXX_STANDARD 14)

add_executable(hw3new main.cpp hw3_output.cpp hw3_output.h scanner.lex parser.ypp declarations.cpp declarations.h)