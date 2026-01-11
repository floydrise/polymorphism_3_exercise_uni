cmake_minimum_required(VERSION 4.0)
project(uni_work)

set(CMAKE_CXX_STANDARD 23)

add_executable(uni_work main.cpp
        classes/Food.h
        classes/Food.cpp
        classes/Vegetable.h
        classes/Vegetable.cpp
        classes/Meat.h
        classes/Meat.cpp
        classes/Animal.h
        classes/Animal.cpp
        classes/Mammal.h
        classes/Mammal.cpp
        classes/Mouse.h
        classes/Mouse.cpp
        classes/Zebra.h
        classes/Zebra.cpp
        classes/Feline.cpp
        classes/Cat.h
        classes/Cat.cpp
        classes/Tiger.h
        classes/Tiger.cpp)
