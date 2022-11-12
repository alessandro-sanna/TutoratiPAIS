//
// Created by liveuser on 12/6/21.
//

#include "merge_sort.h"


void merge(p_employee array[], int left, int middle, int right, order_strategy compare)
{
    int i, j, k;
    int size_left = middle - left + 1;
    int size_right = right - middle;

    /* create temp arrays */
    p_employee left_array[size_left], right_array[size_right];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < size_left; i++) left_array[i] = array[left + i];
    for (j = 0; j < size_right; j++) right_array[j] = array[middle + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray

    while (i < size_left && j < size_right) {
        if (compare(left_array[i], right_array[j])) {
            array[k] = left_array[i];
            i++;
        }
        else {
            array[k] = right_array[j];
            j++;
        }
        k++;
    }

    while (i < size_left) array[k++] = left_array[i++];
    while (j < size_right) array[k++] = right_array[j++];
}

void sort(p_employee array[], int left, int right, order_strategy compare) {
    int middle;
    if (left < right) {
        middle = (right + left) / 2;
        sort(array, left, middle, compare);
        sort(array, middle + 1, right, compare);
        merge(array, left, middle, right, compare);
    }

}

void merge_sort(p_wrapper wrapper) {
    order_strategy compare = get_order(wrapper);
    p_employee *array = ( p_employee * ) get_content(wrapper);
    int size = get_size(wrapper);
    sort(array, 0, size - 1, compare);
};