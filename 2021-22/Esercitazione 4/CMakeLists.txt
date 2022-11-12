cmake_minimum_required(VERSION 3.21)
project(esercitazione_4 C)

set(CMAKE_C_STANDARD 99)

add_executable(esercizio_1 esercizio_1/main.c
        esercizio_1/sorts/merge_sort.c
        esercizio_1/sorts/merge_sort.h
        esercizio_1/sorts/selection_sort.c
        esercizio_1/sorts/selection_sort.h
        esercizio_1/sort.c
        esercizio_1/sort.h
        esercizio_1/data_types/employee.c
        esercizio_1/data_types/employee.h
        esercizio_1/data_types/wrapper.c
        esercizio_1/data_types/wrapper.h
        esercizio_1/orders/for_surnames.c
        esercizio_1/orders/for_surnames.h
        esercizio_1/orders/for_idnumbers.c
        esercizio_1/orders/for_idnumbers.h)

add_executable(esercizio_2 esercizio_2/main.c
        esercizio_2/sorts/merge_sort.c
        esercizio_2/sorts/merge_sort.h
        esercizio_2/sorts/selection_sort.c
        esercizio_2/sorts/selection_sort.h
        esercizio_2/sort.c
        esercizio_2/sort.h
        esercizio_2/data_types/employee.c
        esercizio_2/data_types/employee.h
        esercizio_2/data_types/wrapper.c
        esercizio_2/data_types/wrapper.h
        esercizio_2/orders/for_surnames.c
        esercizio_2/orders/for_surnames.h
        esercizio_2/orders/for_idnumbers.c
        esercizio_2/orders/for_idnumbers.h
        esercizio_2/data_types/chain_list.c
        esercizio_2/data_types/chain_list.h)
