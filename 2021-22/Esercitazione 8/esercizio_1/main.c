//
// Created by sanna on 23/12/2021.
//
#include "hybrid.h"
#include <stdio.h>

int main(void) {
    p_point array[] = {
            new_point(0, 0),
            new_point(0, 1),
            new_point(0.5, 0.5),
            new_point(2, 1),
            new_point(0.25, 0)
    };
    int size = 5;
    for (int i = 0; i < size; i++) {printf("%.2f, ", get_distance(array[i]));}
    printf("\n");
    hybrid_sort(array, size, 3, '<');
    for (int i = 0; i < size; i++) {printf("%.2f, ", get_distance(array[i]));}
    printf("\n");

    return 0;
}