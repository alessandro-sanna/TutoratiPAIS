//
// Created by alessandro on 16/12/21.
//

#include "true_heap.h"
#include "../strats.h"

#include "../utils.h"


void heapify(int array[], int size, int node, sort_strat compare) {
    int child = get_element(array, size, node, compare);
    if (node < size && compare(array[node], array[child])) {
        swap(array, node, child);
        heapify(array, size, child, compare);
    }
};

void build_heap(int array[], int size, sort_strat compare) {
    for (int i = parent(size - 1); i >= 0; i--) {
        heapify(array, size, i, compare);
    }
};
void __hidden(int array[], int size, sort_strat compare) {
    if (size >= 1) {
        swap(array, 0, size - 1);
        heapify(array, size - 1, 0, compare);
        __hidden(array, size - 1, compare);
    }
}

void heap_sort(int array[], int size, char sort) {
    sort_strat compare = get_strat(sort);
    build_heap(array, size, compare);
    __hidden(array, size, compare);
};