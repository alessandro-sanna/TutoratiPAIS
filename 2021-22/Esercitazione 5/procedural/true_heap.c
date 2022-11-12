//
// Created by alessandro on 16/12/21.
//

#include "true_heap.h"
#include "../strats.h"

#include "../utils.h"


void heapify(int array[], int size, int node, sort_strat compare) {
    int child = get_element(array, size, node, compare);
    while (node < size && compare(array[node], array[child])) {
        swap(array, node, child);
        node = child;
        child = get_element(array, size, node, compare);
    }
};

void build_heap(int array[], int size, sort_strat compare) {
    for (int i = parent(size - 1); i >= 0; i--) {
        heapify(array, size, i, compare);
    }
};

void heap_sort(int array[], int size, char sort) {
    sort_strat compare = get_strat(sort);
    build_heap(array, size, compare);
    for(int size_i = size - 1; size_i >= 1; size_i--) {
        swap(array, size_i, 0);
        heapify(array, size_i, 0, compare);
    }
};