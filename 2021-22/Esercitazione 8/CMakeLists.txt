cmake_minimum_required(VERSION 3.21)
project(esercitazione_8 C)

set(CMAKE_C_STANDARD 99)

add_executable(esercizio_1 esercizio_1/point.c esercizio_1/point.h esercizio_1/selection.c esercizio_1/selection.h esercizio_1/insertion.c esercizio_1/insertion.h esercizio_1/hybrid.c esercizio_1/hybrid.h esercizio_1/criteria.c esercizio_1/criteria.h esercizio_1/utils.c esercizio_1/utils.h esercizio_1/main.c)
target_link_libraries(esercizio_1 m)

add_executable(esercizio_2 esercizio_2/magic.c esercizio_2/magic.h esercizio_2/main.c)

add_executable(esercizio_3 esercizio_3/main.c)

add_executable(esercizio_1-OPZ esercizio_1-OPZ/classpoint.c esercizio_1-OPZ/classpoint.h
        esercizio_1/point.h esercizio_1/point.c esercizio_1-OPZ/partial_heap.c esercizio_1-OPZ/partial_heap.h esercizio_1-OPZ/main.c)