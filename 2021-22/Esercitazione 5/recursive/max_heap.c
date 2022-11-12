//
// Created by alessandro on 16/12/21.
//

#include "max_heap.h"
#include "../utils.h"


void max_heapify(int array[], int size, int node) {
    int child = get_max_element(array, size, node);
    if (node < size && array[node] < array[child]) {
        swap(array, node, child);
        max_heapify(array, size, child);
    }
};

void build_max_heap(int array[], int size) {
    for (int i = parent(size - 1); i >= 0; i--) {
        max_heapify(array, size, i);
    }
};

void __maxhidden(int array[], int size) {
    if (size >= 1) {
        swap(array, 0, size - 1);
        max_heapify(array, size - 1, 0);
        __maxhidden(array, size - 1);
    }
}
void max_heap_sort(int array[], int size) {
    build_max_heap(array, size);
    __maxhidden(array, size);
};