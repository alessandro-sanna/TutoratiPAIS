cmake_minimum_required(VERSION 3.17)
project(esercitazione_2 C)

set(CMAKE_C_STANDARD 99)

add_executable(esercizio_1 esercizio_1/main.c esercizio_1/calcolo.c esercizio_1/calcolo.h)
add_executable(esercizio_2 esercizio_2/main.c esercizio_2/calcolo.c esercizio_2/calcolo.h)
add_executable(esercizio_3 esercizio_3/main.c esercizio_3/stack_a.c esercizio_3/stack.h)

target_link_libraries(esercizio_1 m)
target_link_libraries(esercizio_2 m)