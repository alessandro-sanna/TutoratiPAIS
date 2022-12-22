#include "sort.h"


void merge(int array[], int left, int middle, int right)
{
    int i, j, k;
    int size_left = middle - left + 1;
    int size_right = right - middle;

    /* create temp arrays */
    int left_array[size_left], right_array[size_right];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < size_left; i++) left_array[i] = array[left + i];
    for (j = 0; j < size_right; j++) right_array[j] = array[middle + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray

    while (i < size_left && j < size_right) {
        if (left_array[i] < right_array[j]) {
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

void sort(int array[], int left, int right) {
    int middle;
    if (left < right) {
        middle = (right + left) / 2;
        sort(array, left, middle);
        sort(array, middle + 1, right);
        merge(array, left, middle, right);
    }

}

void merge_sort(int array[], int size) {
    sort(array, 0, size - 1);
};