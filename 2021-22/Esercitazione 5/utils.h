//
// Created by alessandro on 16/12/21.
//

#ifndef ESERCITAZIONE_5_UTILS_H
#define ESERCITAZIONE_5_UTILS_H

#include "strats.h"

int get_max_element(int array[], int size, int node);
int get_min_element(int array[], int size, int node);
int get_element(int array[], int size, int node, sort_strat compare);
void swap(int array[], int var_1, int var_2);
int parent(int node);
void printf_a(int array[], int size);
#endif //ESERCITAZIONE_5_UTILS_H
