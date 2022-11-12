//
// Created by sanna on 23/12/2021.
//

#include <stdio.h>
#include "classpoint.h"

int main(void) {
    p_classpoint training_set[] = {
            new_cp(new_point(0, 0), 0),
            new_cp(new_point(0, 1), 1),
            new_cp(new_point(0.5, 0.5), 1),
            new_cp(new_point(2, 1), 2),
            new_cp(new_point(0.25, 0), 0)
    };
    p_point target = new_point(0.125, 0);
    int size = 5;
    int k_neighbors = 2;
    int found = classify(target, training_set, size, k_neighbors);
    printf("%d\n", found);

    return 0;
}