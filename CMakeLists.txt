cmake_minimum_required(VERSION 3.28)
project(sepplesplayground)

set(CMAKE_CXX_STANDARD 17)

add_executable(sepplesplayground main.cpp
        "Source Files/calculator.cpp"
        "Header Files/calculator.h"
        "Source Files/CalculatorEx.cpp"
        "Header Files/CalculatorEx.h")
