//
// Created by alessandro on 16/12/21.
//

#include <stdio.h>
#include "utils.h"
#include "strats.h"

int parent(int node) {
    return (node - 1) / 2;
}

int left(int node) {
    return node * 2 + 1;
}

int right(int node) {
    return node * 2 + 2;
}

int get_max_element(int array[], int size, int node) {
    int l_i = left(node);
    int r_i = right(node);

    if (l_i >= size) {
        return node;
    } else if (r_i >= size) {
        return l_i;
    } else {
        return array[l_i] > array[r_i] ? l_i : r_i;
    }
};

int get_min_element(int array[], int size, int node) {
    int l_i = left(node);
    int r_i = right(node);

    if (l_i >= size) {
        return node;
    } else if (r_i >= size) {
        return l_i;
    } else {
        return array[l_i] < array[r_i] ? l_i : r_i;
    }
};

int get_element(int array[], int size, int node, sort_strat compare) {
    int l_i = left(node);
    int r_i = right(node);

    if (l_i >= size) {
        return node;
    } else if (r_i >= size) {
        return l_i;
    } else {
        return !compare(array[l_i], array[r_i]) ? l_i : r_i;
    }
};

void swap(int array[], int var_1, int var_2) {
    int tmp = array[var_1];
    array[var_1] = array[var_2];
    array[var_2] = tmp;
}

void printf_a(int array[], int size) {
    int i = 0;
    printf("{");
    while (i < size) printf("%d, ", array[i++]);
    printf("\b\b}\n");
}