cmake_minimum_required(VERSION 3.22)
project(untitled2 C)

set(CMAKE_C_STANDARD 99)

add_executable(es4 main.c
        procedural.c
        procedural.h
        recursive.c
        recursive.h)
