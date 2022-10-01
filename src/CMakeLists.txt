cmake_minimum_required(VERSION 3.23)
project(LongArithmetic)

set(CMAKE_CXX_STANDARD 14)

add_executable(LongArithmetic main.cpp Models/BigInt.cpp Models/BigInt.h Models/BigReal.cpp Models/BigReal.h)
