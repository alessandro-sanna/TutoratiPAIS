//
// Created by sanna on 23/12/2021.
//
#include <stdio.h>

void insertion_sort_rec(int *array, int size) {
    int candidate, j;
    if (size > 1) {
        insertion_sort_rec(array, size - 1);
        candidate = *(array + size - 1); // array[size - 1]
        j = size - 2;
        while(j >= 0 && array[j] <= candidate) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = candidate;
        /*
        for(; j > -1; j--) {
            if (*(array + j) <= candidate) { break; }
            else { *(array + j + 1) = *(array + j); }
        }
        *(array + j + 1) = candidate;
        */
    }
    // return;
}

int main() {
    int array[] = {0,9,8,7,4,5,6,1,3,2};
    int size = 10;
    for(int i = 0; i < size; i++) { printf("%d ", array[i]); }
    printf("\n");
    insertion_sort_rec(array, size);
    for(int i = 0; i < size; i++) { printf("%d ", array[i]); }
    printf("\n");
    return 0;
}

