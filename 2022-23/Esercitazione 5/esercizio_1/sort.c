#include <string.h>
#include "sort.h"

void swap(char **a, char **b) {
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}


void selectionSort(char **array, int size) {
    int i, j, toSwap;
    for (i = 0; i < size - 1; i++)
    {
        toSwap = i;

        for (j = i + 1; j < size; j++)
        {
            if (strcmp(array[j], array[toSwap]) < 0)
            {
                toSwap = j;
            }
        }

        if (toSwap != i)
        {
            swap(&array[i], &array[toSwap]);
        }
    }
}