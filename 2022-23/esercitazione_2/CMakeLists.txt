cmake_minimum_required(VERSION 3.22)
project(esercitazione_2 C)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_executable(esercitazione_2_ARRAYS_alt
        longmain.c
        queue_arrays.c
        queue.h
        )

add_executable(esercitazione_2_LISTS_alt
        longmain.c
        queue.c
        queue.h
        )
        
add_executable(esercitazione_2_ARRAYS
        main.c
        queue_arrays.c
        queue.h
        )

add_executable(esercitazione_2_LISTS
        main.c
        queue.c
        queue.h
        )
