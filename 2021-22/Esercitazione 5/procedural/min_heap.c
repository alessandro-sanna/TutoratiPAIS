//
// Created by alessandro on 16/12/21.
//
#include "../utils.h"
#include "min_heap.h"

void min_heapify(int array[], int size, int node) {
    int child = get_min_element(array, size, node);
    while (node < size && array[node] > array[child]) {
        swap(array, node, child);
        node = child;
        child = get_min_element(array, size, node);
    }
};

void build_min_heap(int array[], int size) {
    for (int i = parent(size - 1); i >= 0; i--) {
        min_heapify(array, size, i);
    }
};

void min_heap_sort(int array[], int size) {
    build_min_heap(array, size);
    for(int size_i = size - 1; size_i >= 1; size_i--) {
        swap(array, size_i, 0);
        min_heapify(array, size_i, 0);
    }
};