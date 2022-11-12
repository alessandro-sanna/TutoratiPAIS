//
// Created by sanna on 23/12/2021.
//

#include "classpoint.h"
#include <stdlib.h>
#include "partial_heap.h"


struct ClassPoint{
    p_point point;
    int class;
};

p_classpoint new_cp(p_point point, int class) {
    p_classpoint new = (p_classpoint) malloc(sizeof(struct ClassPoint));
    new->point = point;
    new->class = class;
    return new;
}

p_point get_point(p_classpoint cp){
    return cp->point;
}

int count_class(p_classpoint array[], int size, int k_neighbors, int class) {
    int counter = 0;
    for (int i = size - 1; i >= (size - k_neighbors); i--) {
        if (array[i]->class == class) counter++;
    }
    return counter;
}

int classify(p_point target, p_classpoint training_set[], int size, int k_neighbors) {
    p_classpoint backup[size];
    int max_class, current_neighbors, max_neighbors = 0;

    for(int i = 0; i < size; i++) {
        backup[i] = training_set[i];
        set_origin(backup[i]->point, target);
    }

    partial_heap_sort(backup, size, k_neighbors);

    for (int i = size - 1; i >= size - k_neighbors; i--) {
        current_neighbors = count_class(backup, size, k_neighbors, backup[i]->class);
        if (current_neighbors > max_neighbors) {
            max_neighbors = current_neighbors;
            max_class = backup[i]->class;
        }
    }
    return max_class;
};