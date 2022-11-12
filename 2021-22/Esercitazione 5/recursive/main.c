#include <stdio.h>
#include "max_heap.h"
#include "min_heap.h"

#include "true_heap.h"
#include "../utils.h"
int main() {
    int array[] = {0, 7, 9, 5, 6, 2, 4, 3, 1, 8};
    int size = 10;
    printf_a(array, size);
    heap_sort(array, size, '<');
    printf_a(array, size);
    heap_sort(array, size, '>');
    printf_a(array, size);
    return 0;
}
