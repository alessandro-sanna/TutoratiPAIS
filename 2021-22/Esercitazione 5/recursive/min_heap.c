//
// Created by alessandro on 16/12/21.
//
#include "../utils.h"
#include "min_heap.h"

void min_heapify(int array[], int size, int node) {
    int child = get_min_element(array, size, node);
    if (node < size && array[node] > array[child]) {
        swap(array, node, child);
        min_heapify(array, size, child);
    }
};

void build_min_heap(int array[], int size) {
    for (int i = parent(size - 1); i >= 0; i--) {
        min_heapify(array, size, i);
    }
};

void __minhidden(int array[], int size) {
    if (size >= 1) {
        swap(array, 0, size - 1);
        min_heapify(array, size - 1, 0);
        __minhidden(array, size - 1);
    }
}

void min_heap_sort(int array[], int size) {
    build_min_heap(array, size);
    __minhidden(array, size);
};