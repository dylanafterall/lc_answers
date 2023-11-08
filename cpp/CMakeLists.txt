cmake_minimum_required(VERSION 3.26)
project(cpp_lc_answers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -O0 -Wall -Werror")

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/easy/two_sum.cpp
        src/easy/palindrome_number.cpp
        src/easy/roman_to_int.cpp
)

