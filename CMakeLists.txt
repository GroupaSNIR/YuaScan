cmake_minimum_required(VERSION 3.27)
project(YuaScan)

set(CMAKE_CXX_STANDARD 23)

add_executable(YuaScan main.cpp
        includes/utils.hpp
        includes/req.hpp
        includes/launch.hpp
        includes/Options.cpp
        includes/Options.h
)
