#include "insertion_sort.h"

void insertion_sort(p_wrapper wrapper) {
    int *array = get_array(wrapper);
    int size = get_size(wrapper);
    criterion_s compare = get_criterion(wrapper);
    //
    int candidate, j;
    for(int i = 0; i < size; i++) {
        candidate = array[i];
        j = i - 1;
        while (j >= 0 && !compare(array[j], candidate)) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = candidate;
    }
};