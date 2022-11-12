//
// Created by sanna on 19/12/2021.
//

#include "utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printf_a(int array[], int size) {
    int i = 0;
    printf("{");
    while (i < size) printf("%d, ", array[i++]);
    printf("\b\b}\n");
}

void shuffle_a(int *array, int size) {
    srand(time(NULL));
    int i, j, tmp;
    if (size > 1) {
        for (i = 0; i < size - 1; i++) {
            j = i + rand() / (RAND_MAX / (size - i) + 1);
            swap(&array[i], &array[j]);
        }
    }
}