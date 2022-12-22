cmake_minimum_required(VERSION 3.20)
project(esercitazione_5 C)

set(CMAKE_C_STANDARD 99)

add_executable(esercizio_1 esercizio_1/main.c
        esercizio_1/sort.c esercizio_1/sort.h)

add_executable(esercizio_2 esercizio_2/main.c
        esercizio_2/sort.c esercizio_2/sort.h)

add_executable(esercizio_3 esercizio_3/main.c
        esercizio_3/utils.c esercizio_3/utils.h
        esercizio_3/contestant.c esercizio_3/contestant.h
        esercizio_3/__contestant_private/sort.c esercizio_3/__contestant_private/sort.h
        esercizio_3/__contestant_private/strategies/__get.c
        esercizio_3/__contestant_private/strategies/__get.h
        esercizio_3/__contestant_private/strategies/forScores.c
        esercizio_3/__contestant_private/strategies/forScores.h
        esercizio_3/__contestant_private/strategies/forSurnames.c
        esercizio_3/__contestant_private/strategies/forSurnames.h)
