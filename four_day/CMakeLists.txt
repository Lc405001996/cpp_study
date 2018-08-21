cmake_minimum_required(VERSION 3.5.1)
project(cpp_study)

set(CMAKE_CXX_STANDARD 11)


add_executable(friend.cpp friend/friend.cpp)
add_executable(foh friend_of_head/main.cpp friend_of_head/A.cpp
        friend_of_head/A.h friend_of_head/B.cpp friend_of_head/B.h)
add_executable(exp1 opera_overload/main.cpp opera_overload/Unreal.cpp opera_overload/Unreal.h)