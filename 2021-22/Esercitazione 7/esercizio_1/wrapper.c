#include "wrapper.h"
#include "criterion_strategies/__all.h"
#include "algorithm_strategies/__all.h"
#include <stdlib.h>

struct Wrapper {
    int *array;
    int size;
    algorithm_s algorithm_strategy;
    criterion_s criterion_strategy;
};

p_wrapper new_wrapper(int array[], int size, char algorithm_control, char criterion_control) {
    p_wrapper new = (p_wrapper) malloc(sizeof(struct Wrapper));
    new->array = array;
    new->size = size;
    switch (algorithm_control) {
        case 'm':
            new->algorithm_strategy = merge_sort;
            break;
        case 'i':
            new->algorithm_strategy = insertion_sort;
            break;
        case 's':
            new->algorithm_strategy = selection_sort;
            break;
        case 'h':
            new->algorithm_strategy = heap_sort;
            break;
        default:
            new->algorithm_strategy = merge_sort;
            break;
    };
    switch (criterion_control) {
        case '<':
            new->criterion_strategy = rising;
            break;
        case '>':
            new->criterion_strategy = decreasing;
            break;
        default:
            new->criterion_strategy = rising;
            break;
    };
    return new;
};

int *get_array(p_wrapper wrapper) {
    return wrapper->array;
}
int get_size(p_wrapper wrapper) {
    return wrapper->size;
}
algorithm_s get_algorithm(p_wrapper wrapper) {
    return wrapper->algorithm_strategy;
}
criterion_s get_criterion(p_wrapper wrapper) {
    return wrapper->criterion_strategy;
}
