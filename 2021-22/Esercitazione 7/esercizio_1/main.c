#include <stdio.h>
#include "sort.h"
#include "utils.h"
#define size 10

int main() {
    int array[size];
    for (int i = 0; i < size; i++) array[i] = i;
    char algs[] = {'m', 'i', 's', 'h'};
    char ords[] = {'<', '>'};
    for (int a = 0; a < 4; a++) {
        for (int o = 0; o < 2; o++) {
            printf("shuffled:\n");
            shuffle_a(array, size);
            printf_a(array, size);
            printf("using %c and %c\n", algs[a], ords[o]);
            generic_sort(array, size, algs[a], ords[o]);
            printf_a(array, size);
        }
    }
    return 0;
}