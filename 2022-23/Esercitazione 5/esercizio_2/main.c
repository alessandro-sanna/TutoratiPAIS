#include <stdio.h>
#include "sort.h"

void printIArray(int array[], int size) {
    printf("[");
    for (int i = 0; i < size; ++i) {
        printf("%d, ", array[i]);
    }
    printf("\b\b] \n");
}



int main() {
    int array[] = {0,6,3,5,2,7,9,8,4,1};
    int size = 10;
    printIArray(array, size);
    merge_sort(array, size);
    printIArray(array, size);
    return 0;
}
