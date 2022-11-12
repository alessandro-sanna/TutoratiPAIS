#include "heap_sort.h"
#include "../utils.h"

int left(int node){ return node * 2 + 1; }
int right(int node){ return node * 2 + 2;}
int parent(int node){ return (node - 1) / 2; }

int get_element(int array[], int size, int node, criterion_s compare) {
    int l_i = left(node);
    int r_i = right(node);

    if(l_i >= size) {
        return node;
    } else if (r_i >= size) {
        return l_i;
    } else {
        return !compare(array[l_i], array[r_i]) ? l_i : r_i;
    }
}

void heapify(int array[], int size, int node, criterion_s compare) {
    int child = get_element(array, size, node, compare);
    while(node < size && compare(array[node], array[child])) {
        swap(&array[node], &array[child]);
        node = child;
        child = get_element(array, size, node, compare);
    }
}
void build_heap(int array[], int size, criterion_s compare) {
    for(int i = parent(size - 1); i >= 0; i--) {
        heapify(array, size, i, compare);
    }
}

void heap_sort(p_wrapper wrapper) {
    int *array = get_array(wrapper);
    int size = get_size(wrapper);
    criterion_s compare = get_criterion(wrapper);
    build_heap(array, size, compare);
    for (int size_i = size - 1; size_i >= 1; size_i--) {
        swap(&array[size_i], &array[0]);
        heapify(array, size_i, 0, compare);
    }
};