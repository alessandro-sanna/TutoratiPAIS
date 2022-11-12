//
// Created by sanna on 17/12/2021.
//

#ifndef ESERCITAZIONE_6_QUEUE_H
#define ESERCITAZIONE_6_QUEUE_H

#include "process.h"
typedef struct Queue *p_queue;
p_queue new_queue(p_process array[], int size);

void insert(p_process process, p_queue queue);
p_process get_max(p_queue queue);
p_process pop_max(p_queue queue);
void increase_key(int index, int amount, p_queue queue);
void decrease_key(int index, int amount, p_queue queue);

void printf_q(p_queue queue);
void destroy_q(p_queue queue);
#endif //ESERCITAZIONE_6_QUEUE_H
