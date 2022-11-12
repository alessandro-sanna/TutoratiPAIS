//
// Created by liveuser on 12/6/21.
//

#include "selection_sort.h"

void swap(p_employee *val_1, p_employee *val_2) {
    p_employee tmp_1 = *val_1;
    p_employee tmp_2 = *val_2;
    *val_1 = tmp_2;
    *val_2 = tmp_1;
}

void selection_sort(p_wrapper wrapper) {
    p_employee *array = ( p_employee * ) get_content(wrapper);
    int size = get_size(wrapper);
    order_strategy compare = get_order(wrapper);
    int pos_swap;

    for(int i = 0; i < size; i++) {
        pos_swap = i;
        for(int j = i + 1; j < size; j++) {
            if (compare(array[j], array[pos_swap])) {
                pos_swap = j;
            }
        }
        if (pos_swap != i) {
            swap(&array[i], &array[pos_swap]);
        }
    }
}