//
// Created by liveuser on 12/6/21.
//

#include <stdio.h>
#include "merge_sort.h"


void merge(p_list array, int left, int middle, int right, order_strategy compare)
{
    int i, j, k;
    printf("%d,%d,%d\n",left,middle,right);
    int size_left = middle - left + 1;
    int size_right = right - middle;
    p_list aux = array;
    /* create temp arrays */
    p_employee left_array[size_left], right_array[size_right];

    int skip = 0;
    while(skip++ < left) aux = get_next(aux);
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < size_left; i++) {
        left_array[i] = get_data(aux);
        aux = get_next(aux);
    }
    aux = array;
    skip = 0;
    while(skip++ < middle + 1) aux = get_next(aux);
    for (j = 0; j < size_right; j++) {
        right_array[j] = get_data(aux);
        aux = get_next(aux);
    }

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray
    skip = 0;
    aux = array;
    while(skip++ < left) aux = get_next(aux);

    while (i < size_left && j < size_right) {
        if (compare(left_array[i], right_array[j])) {
            set_data(aux, left_array[i]);
            i++;
        }
        else {
            set_data(aux, right_array[j]);
            j++;
        }
        aux = get_next(aux);
    }

    while (i < size_left) {
        set_data(aux, left_array[i++]);
        aux = get_next(aux);
    }
    while (j < size_right) {
        set_data(aux, right_array[j++]);
        aux = get_next(aux);
    }
}

void sort(p_list array, int left, int right, order_strategy compare) {
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
    p_list array = ( p_list ) get_content(wrapper);
    int size = get_size(wrapper);
    sort(array, 0, size - 1, compare);
};