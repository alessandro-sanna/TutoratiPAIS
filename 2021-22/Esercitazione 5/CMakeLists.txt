cmake_minimum_required(VERSION 3.21)
project(esercitazione_5 C)

set(CMAKE_C_STANDARD 99)

add_executable(procedural
        procedural/main.c
        procedural/max_heap.c
        procedural/max_heap.h
        utils.c utils.h
        procedural/min_heap.c
        procedural/min_heap.h
        procedural/true_heap.c
        procedural/true_heap.h
        strats.c strats.h)

add_executable(recursive
        recursive/main.c
        recursive/max_heap.c
        recursive/max_heap.h
        utils.c utils.h
        recursive/min_heap.c
        recursive/min_heap.h
        recursive/true_heap.c
        recursive/true_heap.h
        strats.c strats.h)
