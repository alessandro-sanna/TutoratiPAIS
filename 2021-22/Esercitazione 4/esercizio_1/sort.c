//
// Created by liveuser on 12/6/21.
//
#include "data_types/wrapper.h"


void sort_employees(p_employee array[], int size, char sort_code, char criterion_code, char order_code) {
    p_wrapper wrapper = new_wrapper(array, size);
    wrapper = set_strategy(wrapper, sort_code, criterion_code, order_code);
    sort_strategy sort_method = get_sort(wrapper);
    sort_method(wrapper);
}