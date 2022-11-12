//
// Created by liveuser on 12/6/21.
//

#include "wrapper.h"
#include "employee.h"
#include "../sorts/merge_sort.h"
#include "../sorts/selection_sort.h"
#include "../orders/for_idnumbers.h"
#include "../orders/for_surnames.h"
#include <stdlib.h>

enum FIELDS{SURNAME, IDNUMBER};

struct Wrapper {
    p_employee *content;
    int size;
    sort_strategy sort;
    int criterion;
    order_strategy order;
};

p_wrapper new_wrapper(p_employee array[], int size) {
    p_wrapper new_w = (p_wrapper) malloc(sizeof(struct Wrapper));
    new_w->content = array;
    new_w->size = size;
    new_w->sort = NULL;
    new_w->criterion = -1;
    new_w->order = NULL;
    return new_w;
}

p_wrapper set_strategy(p_wrapper wrapper, char sort_code, char criterion_code, char order_code){
    switch (sort_code) {
        case 'M':
            wrapper->sort = merge_sort;
            break;
        case 'S':
            wrapper->sort = selection_sort;
            break;
        default:
            wrapper->sort = NULL;
            break;
    }
    switch (criterion_code) {
        case 's':
            wrapper->criterion = SURNAME;
            break;
        case 'i':
            wrapper->criterion = IDNUMBER;
            break;
        default:
            wrapper->criterion = -1;
            break;
    }
    switch (order_code) {
        case '<': // rising
            if (wrapper->criterion == SURNAME) wrapper->order = rising_surnames;
            if (wrapper->criterion == IDNUMBER) wrapper->order = rising_idnumbers;
            break;
        case '>': // decreasing
            if (wrapper->criterion == SURNAME) wrapper->order = decreasing_surnames;
            if (wrapper->criterion == IDNUMBER) wrapper->order = decreasing_idnumbers;
            break;
        default:
            wrapper->order = NULL;
            break;
    }
    return wrapper;
}

sort_strategy get_sort(p_wrapper wrapper) {
    return wrapper->sort;
}

order_strategy get_order(p_wrapper wrapper) {
    return wrapper->order;
}

void *get_content(p_wrapper wrapper) {
    return wrapper->content;
}

int get_size(p_wrapper wrapper) {
    return wrapper->size;
}
