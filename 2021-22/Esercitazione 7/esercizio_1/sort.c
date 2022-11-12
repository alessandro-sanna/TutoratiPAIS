#include "sort.h"
#include "wrapper.h"

void generic_sort(int array[], int size, char algorithm_control, char criterion_control) {
    p_wrapper data = new_wrapper(array, size, algorithm_control, criterion_control);
    algorithm_s algorithm = get_algorithm(data);
    algorithm(data);
};