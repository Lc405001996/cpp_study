cmake_minimum_required(VERSION 3.9)
project(cpp_study)

set(CMAKE_CXX_STANDARD 11)

add_executable(main.cpp reference/main.cpp)
add_executable(test.cpp test/test.cpp)
add_executable(overload.cpp overload/overload.cpp)
add_executable(template.cpp template/template.cpp)