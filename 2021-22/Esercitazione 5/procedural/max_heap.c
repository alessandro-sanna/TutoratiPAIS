//
// Created by alessandro on 16/12/21.
//

#include "max_heap.h"
#include "../utils.h"


void max_heapify(int array[], int size, int node) {
    int child = get_max_element(array, size, node);
    while (node < size && array[node] < array[child]) {
        swap(array, node, child);
        node = child;
        child = get_max_element(array, size, node);
    }
};

void build_max_heap(int array[], int size) {
    for (int i = parent(size - 1); i >= 0; i--) {
        max_heapify(array, size, i);
    }
};

void max_heap_sort(int array[], int size) {
    build_max_heap(array, size);
    for(int size_i = size - 1; size_i >= 1; size_i--) {
        swap(array, size_i, 0);
        max_heapify(array, size_i, 0);
    }
};