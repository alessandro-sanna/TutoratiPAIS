//
// Created by liveuser on 12/6/21.
//

#ifndef UNTITLED_WRAPPER_H
#define UNTITLED_WRAPPER_H
#include "employee.h"
#include <stdbool.h>
typedef struct Wrapper *p_wrapper;
typedef void (*sort_strategy) (p_wrapper);
typedef bool (*order_strategy) (p_employee, p_employee);

p_wrapper new_wrapper(p_employee array[], int size);
p_wrapper set_strategy(p_wrapper wrapper, char sort_code, char criterion_code, char order_code);
// getters
sort_strategy get_sort(p_wrapper wrapper);
order_strategy get_order(p_wrapper wrapper);
void *get_content(p_wrapper wrapper);
int get_size(p_wrapper wrapper);
#endif //UNTITLED_WRAPPER_H
