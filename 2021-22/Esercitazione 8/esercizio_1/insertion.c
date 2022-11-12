//
// Created by sanna on 23/12/2021.
//

#include "insertion.h"

void insertion_sort(p_point array[], int size, criterion compare) {
    p_point candidate;
    int j;
    for (int i = 0; i < size; i++) {
        candidate = array[i];
        j = i - 1;
        while (j >= 0 && !compare(get_distance(array[j]), get_distance(candidate))) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = candidate;
    }
}