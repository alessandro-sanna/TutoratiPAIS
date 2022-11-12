cmake_minimum_required(VERSION 3.21)
project(es_7 C)

set(CMAKE_C_STANDARD 99)

add_executable(esercizio_1 esercizio_1/main.c esercizio_1/algorithm_strategies/merge_sort.c esercizio_1/algorithm_strategies/merge_sort.h esercizio_1/algorithm_strategies/selection_sort.c esercizio_1/algorithm_strategies/selection_sort.h esercizio_1/algorithm_strategies/heap_sort.c esercizio_1/algorithm_strategies/heap_sort.h esercizio_1/algorithm_strategies/insertion_sort.c esercizio_1/algorithm_strategies/insertion_sort.h esercizio_1/sort.c esercizio_1/sort.h esercizio_1/criterion_strategies/__all.h esercizio_1/wrapper.c esercizio_1/wrapper.h esercizio_1/utils.c esercizio_1/utils.h esercizio_1/algorithm_strategies/__all.h esercizio_1/criterion_strategies/rising.c esercizio_1/criterion_strategies/rising.h esercizio_1/criterion_strategies/decreasing.c esercizio_1/criterion_strategies/decreasing.h)
add_executable(esercizio_2 esercizio_2/main.c esercizio_2/item.h
#        esercizio_2/prog_1/item_1.c
        esercizio_2/prog_2/item_2.c
)
add_executable(esercizio_3 esercizio_3/main.c esercizio_3/unknown.c esercizio_3/unknown.h)