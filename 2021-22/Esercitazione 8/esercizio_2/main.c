//
// Created by sanna on 23/12/2021.
//
#include "magic.h"
#include <stdio.h>
#define size_1 3
#define size_2 4
int main(void) {
    int matrix_1[size_1][size_1] = {
            {8,    1,    6},
            {3,    5,    7},
            {4,    9,    2}
    };
    int matrix_2[size_2][size_2] = {
            {10, -4, -3, 7},
            {-1, 5, 4, 2},
            {3, 1, 0, 6},
            {-2, 8, 9, - 5}
    };
    int ret_val;
    ret_val = greater_magic(size_2, size_2, matrix_2,
                            size_1, size_1, matrix_1);
    printf("%d\n", ret_val);
}
