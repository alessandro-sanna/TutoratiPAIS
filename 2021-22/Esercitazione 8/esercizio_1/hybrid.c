//
// Created by sanna on 23/12/2021.
//

#include "hybrid.h"
#include "criteria.h"
#include "insertion.h"
#include "selection.h"

void hybrid_sort(p_point array[], int size, int pivot, char method) {
    int size_i = pivot, size_s = size - pivot;
    p_point i_array[size_i];
    p_point s_array[size_s];
    criterion compare = get_criterion(method);
    int ins = 0, sel = 0, tot = 0;

    for(int i = 0; i < size_i; i++) { i_array[i] = array[i]; }
    for(int i = 0; i < size_s; i++) { s_array[i] = array[i + pivot]; }

    insertion_sort(i_array, size_i, compare);
    selection_sort(s_array, size_s, compare);

    while (ins < size_i && sel < size_s) {
        if (compare(get_distance(i_array[ins]), get_distance(s_array[sel]))){
            array[tot] = i_array[ins];
            ins++;
        } else {
            array[tot] = s_array[sel];
            sel++;
        }
        tot++;
    }

    while (ins < size_i) array[tot++] = i_array[ins++];
    while (sel < size_s) array[tot++] = s_array[sel++];
};