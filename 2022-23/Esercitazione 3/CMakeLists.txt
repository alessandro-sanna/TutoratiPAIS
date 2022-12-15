cmake_minimum_required(VERSION 3.22)
project(Esercitazione_3 C)

set(CMAKE_C_STANDARD 99)

add_executable(Esercitazione_31
        e1/main.c
        e1/strats/__get.c
        e1/strats/__get.h
        e1/strats/flower.c
        e1/strats/flower.h
        e1/strats/genus.c
        e1/strats/genus.h
        e1/strats/species.c
        e1/strats/species.h
        e1/record.c
        e1/record.h
        e1/list.c
        e1/list.h
)

add_executable(es2
        es2/main.c
        es2/characters.c
        es2/characters.h
        es2/risky.c
        es2/risky.h
        es2/careful.c
        es2/careful.h
        es2/utility.c
        es2/utility.h
        )

add_executable(Esercitazione_33
        es3/main.c)