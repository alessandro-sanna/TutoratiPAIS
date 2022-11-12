cmake_minimum_required(VERSION 3.17)
project(esercitazione_3.2 C)

set(CMAKE_C_STANDARD 99)

add_executable(esercizio_1
        esercizio_1/fizzbuzz.c
        esercizio_1/fizzbuzz.h
        esercizio_1/main.c
        esercizio_1/method_strategies/method_selector.c
        esercizio_1/method_strategies/method_selector.h
        esercizio_1/method_strategies/is_a_multiple.c
        esercizio_1/method_strategies/is_a_multiple.h
        esercizio_1/method_strategies/is_greater.c
        esercizio_1/method_strategies/is_greater.h
        esercizio_1/method_strategies/is_a_pow.c
        esercizio_1/method_strategies/is_a_pow.h
        esercizio_1/operation_selector/add.c
        esercizio_1/operation_selector/add.h
        esercizio_1/operation_selector/mul.c
        esercizio_1/operation_selector/mul.h
        esercizio_1/operation_selector/sub.c
        esercizio_1/operation_selector/sub.h
        esercizio_1/operation_selector/operation_selector.c
        esercizio_1/operation_selector/operation_selector.h)

target_link_libraries(esercizio_1 m)

add_executable(esercizio_2
        esercizio_2/main.c
        esercizio_2/characters.c
        esercizio_2/characters.h
        esercizio_2/characters/all_characters.h
        esercizio_2/characters/elves.c
        esercizio_2/characters/elves.h
        esercizio_2/characters/dwarves.c
        esercizio_2/characters/dwarves.h
        esercizio_2/characters/utility.c
        esercizio_2/characters/utility.h
)

add_executable(esercizio_3
        esercizio_3/main.c
        esercizio_3/list.c
        esercizio_3/list.h
        esercizio_3/record.c
        esercizio_3/record.h
        esercizio_3/equivalences/strategies/equivalents_by_name.c
        esercizio_3/equivalences/strategies/equivalents_by_name.h
        esercizio_3/equivalences/strategies/equivalents_by_surname.c
        esercizio_3/equivalences/strategies/equivalents_by_surname.h
        esercizio_3/equivalences/strategies/equivalents_by_department.c
        esercizio_3/equivalences/strategies/equivalents_by_department.h
        esercizio_3/equivalences/strategies/equivalents_by_paycheck.c
        esercizio_3/equivalences/strategies/equivalents_by_paycheck.h
        esercizio_3/equivalences/select_equivalents.c
        esercizio_3/equivalences/select_equivalents.h
        esercizio_3/equivalences/strategies/all_strategies.h
)