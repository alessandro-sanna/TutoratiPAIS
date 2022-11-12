//
// Created by sanna on 23/12/2021.
//

#include "selection.h"
#include "utils.h"

void selection_sort(p_point array[], int size, criterion compare) {
    int pos_swap;
    for(int i = 0; i < size; i++) {
        pos_swap = i;
        for (int j = i + 1; j < size; j++) {
            if (compare(get_distance(array[j]), get_distance(array[pos_swap]))) {
                pos_swap = j;
            }
        }
        if (pos_swap != i) {
            swap(&array[i], &array[pos_swap]);
        }
    }
};