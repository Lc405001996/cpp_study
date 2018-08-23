cmake_minimum_required(VERSION 3.5.1)
project(cpp_study)

set(CMAKE_CXX_STANDARD 11)

add_executable(student extends/Student.cpp)
add_executable(has-a is-a_has-a/has-a.cpp)
add_executable(more moreExtends/Class.cpp)