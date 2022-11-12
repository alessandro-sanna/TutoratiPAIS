//
// Created by alessandro on 12/5/20.
//
#include <stdlib.h>
#include "selection_sort.h"
#include "../data_types/wrapper.h"
#include "../data_types/chain_list.h"

void swap(p_list el_i, p_list el_j) {
    p_employee val_i = get_data(el_i);
    p_employee val_j = get_data(el_j);
    set_data(el_i, val_j);
    set_data(el_j, val_i);
}

void selection_sort(p_wrapper wrapper) {
    p_list aux_i = (p_list) get_content(wrapper);
    order_strategy compare = get_order(wrapper);
    p_list aux_swap;
    p_list aux_j;
    p_employee val_j, val_swap;

    while (aux_i != NULL) {
        aux_swap = aux_i;
        aux_j = get_next(aux_i);
        while (aux_j != NULL) {
            val_swap = get_data(aux_swap);
            val_j = get_data(aux_j);
            if (compare(val_j, val_swap)) {
                aux_swap = aux_j;
            }
            aux_j = get_next(aux_j);
        }
        if (aux_swap != aux_i) {
            swap(aux_swap, aux_i);
        }
        aux_i = get_next(aux_i);
    }
}

