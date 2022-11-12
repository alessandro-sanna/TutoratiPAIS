//
// Created by sanna on 17/12/2021.
//

#include "heap.h"

int left(int node) { return 2*node + 1; }
int right(int node) { return 2*node + 2; }
int parent(int node) { return (node - 1) / 2; }

int get_element(p_process array[], int size, int node) {
    int left_child = left(node);
    int right_child = right(node);
    if (left_child >= size) {
        return node;
    } else if (right_child >= size) {
        return left_child;
    } else {
        return get_priority(array[left_child]) < get_priority(array[right_child]) ? left_child : right_child;
    }
};

void swap(p_process *a, p_process *b){
    p_process tmp = *b;
    *b = *a;
    *a = tmp;
}

void heapify(p_process array[], int size, int node) {
    int child = get_element(array, size, node);
    while (node < size && get_priority(array[node]) > get_priority(array[child])) {
        swap(&array[node], &array[child]);
        node = child;
        child = get_element(array, size, node);
    }
};

void build_heap(p_process array[], int size) {
    for(int node = parent(size - 1); node >= 0; node--) {
        heapify(array, size, node);
    }
};

void fix (p_process array[], int size, int node) {
    int parent_node = parent(node);
    while (node >= 0 && get_priority(array[parent_node]) > get_priority(array[node])) {
        heapify(array, size, parent_node);
        node = parent_node;
        parent_node = parent(node);
    }
}
