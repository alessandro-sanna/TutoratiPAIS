#include "merge_sort.h"

void merge(int array[], int left, int middle, int right, criterion_s compare) {
    int i, j, k;
    int size_left = middle - left + 1;
    int size_right = right - middle;

    int left_array[size_left];
    int right_array[size_right];

    for(i = 0; i < size_left; i++) left_array[i] = array[left + i];
    for(j = 0; j < size_right; j++) right_array[j] = array[middle + 1 + j];

    i = 0, j = 0, k = left;

    while(i < size_left && j < size_right) {
        if (compare(left_array[i], right_array[j])) {
            array[k] = left_array[i];
            i++;
        } else {
            array[k] = right_array[j];
            j++;
        }
        k++;
    }

    while(i < size_left) array[k++] = left_array[i++];
    while(j < size_right) array[k++] = right_array[j++];
}

void sort(int array[], int left, int right, criterion_s compare) {
    int middle;
    if (left < right) {
        middle = (right + left) / 2;
        sort(array, left, middle, compare);
        sort(array, middle + 1, right, compare);
        merge(array, left, middle, right, compare);
    }
}

void merge_sort(p_wrapper wrapper){
    int *array = get_array(wrapper);
    int size = get_size(wrapper);
    criterion_s compare = get_criterion(wrapper);
    sort(array, 0, size - 1, compare);
};