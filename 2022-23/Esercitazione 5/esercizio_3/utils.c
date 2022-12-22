//
// Created by alessandro on 12/21/22.
//

#include "utils.h"

void printArray(pContestant array[], int size) {
    printf("[\n");
    for (int i = 0; i < size; ++i) {
        printContestant(array[i]);
    }
    printf("]\n\n");
}