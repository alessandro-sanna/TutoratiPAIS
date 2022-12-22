#include "sort.h"
#include "strategies/__get.h"


void insertionSort(pContestant *array, int size, char field){
    pContestant tmp;
    comparison compare = getStrategy(field);
    int j;

    for (int i = 0; i < size; ++i) {
        tmp = array[i];
        j = i - 1;
        while (j >= 0 && !compare(array[j], tmp)) {
            array[j + 1] = array[j];
            array[j] = tmp;
            j--;

        }
    }
};