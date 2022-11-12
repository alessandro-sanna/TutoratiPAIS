//
// Created by sanna on 17/12/2021.
//

#ifndef ESERCITAZIONE_6_HEAP_H
#define ESERCITAZIONE_6_HEAP_H

#include "process.h"
void build_heap (p_process array[], int size);
void fix(p_process array[], int size, int node);
void swap(p_process *a, p_process *b);
void heapify(p_process array[], int size, int node);
#endif //ESERCITAZIONE_6_HEAP_H
