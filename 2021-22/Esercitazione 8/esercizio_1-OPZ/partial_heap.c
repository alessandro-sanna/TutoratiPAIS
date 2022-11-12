//
// Created by sanna on 23/12/2021.
//

#include "partial_heap.h"

int left(int node){ return node * 2 + 1; }
int right(int node){ return node * 2 + 2;}
int parent(int node){ return (node - 1) / 2; }

void swap(p_classpoint *a, p_classpoint *b) {
    p_classpoint tmp = *a;
    *a = *b;
    *b = tmp;
}

int get_element(p_classpoint array[], int size, int node) {
    int l_i = left(node);
    int r_i = right(node);
    float l_dist, r_dist;
    if (l_i >= size) {
        return node;
    } else if (r_i >= node) {
        return l_i;
    } else {
        l_dist = get_distance(get_point(array[l_i]));
        r_dist = get_distance(get_point(array[r_i]));
        return (l_dist < r_dist) ? l_i : r_i;
    }
};
void heapify(p_classpoint array[], int size, int node) {
    int child = get_element(array, size, node);
    float n_dist = get_distance(get_point(array[node]));
    float c_dist = get_distance(get_point(array[child]));
    while (node < size && n_dist > c_dist) {
        swap(&array[node], &array[child]);
        node = child;
        n_dist = get_distance(get_point(array[node]));
        child = get_element(array, size, node);
        c_dist = get_distance(get_point(array[child]));
    }
};
void build_heap(p_classpoint array[], int size) {
    for(int i = parent(size - 1); i >= 0; i--) {
        heapify(array, size, i);
    }
};

void partial_heap_sort(p_classpoint array[], int size, int k_neighbors) {
    build_heap(array, size);
    int hm = 0;
    for (int size_i = size - 1; size_i >= 1; size_i--) {
        swap(&array[size_i], &array[0]);
        heapify(array, size_i, 0);
        if (hm++ >= k_neighbors) break;
    }
};
