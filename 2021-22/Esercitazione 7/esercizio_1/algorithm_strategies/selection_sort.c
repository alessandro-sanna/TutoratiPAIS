#include "selection_sort.h"
#include "../utils.h"

void selection_sort(p_wrapper wrapper) {
    int *array = get_array(wrapper);
    int size = get_size(wrapper);
    criterion_s compare = get_criterion(wrapper);
    int pos;
    for (int i = 0; i < size; i++) {
        pos = i;
        for (int j = i + 1; j < size; j++) {
            if (compare(array[j], array[pos])) {
                pos = j;
            }
        }
        if (pos != i) {
            swap(&array[i], &array[pos]);
        }
    }
};
