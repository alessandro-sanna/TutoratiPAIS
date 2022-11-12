//
// Created by sanna on 17/12/2021.
//
#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
#include "heap.h"
#define MAX 50

struct Queue {
    p_process array[MAX];
    int size;
};

void cp_a(p_process dst[], p_process src[], int size) {
    for(int i = 0; i < size; i++) dst[i] = src[i];
}

p_queue new_queue(p_process array[], int size) {
    p_queue new = (p_queue) malloc(sizeof(struct Queue));
    cp_a(new->array, array, size);
    new->size = size;
    build_heap(new->array, new->size);
    return new;
}

void insert(p_process process, p_queue queue) {
    queue->array[queue->size++] = process;
    fix(queue->array, queue->size, queue->size - 1);
}

p_process get_max(p_queue queue) {
    return queue->array[0];
}

p_process pop_max(p_queue queue) {
    p_process to_return = get_max(queue);
    swap(&queue->array[0], &queue->array[--queue->size]);
    heapify(queue->array, queue->size, 0);
    return to_return;
}

void increase_key(int index, int amount, p_queue queue) {
    set_priority(queue->array[index],
                 get_priority(queue->array[index]) - amount);
    if (get_priority(queue->array[index]) < 0) {
        set_priority(queue->array[index], 0);
    }
    fix(queue->array, queue->size, index);
}

void decrease_key(int index, int amount, p_queue queue) {
    set_priority(queue->array[index],
                 get_priority(queue->array[index]) + amount);
    heapify(queue->array, queue->size, index);
}

void printf_q(p_queue queue) {
    printf("queue at: {");
    for(int i = 0; i < queue->size; i++) {
        printf_p(queue->array[i]);
    }
    printf("}\n");
}

void destroy_q(p_queue queue) {
    for (int i = 0; i < queue->size; i--){
        free(queue->array[i]);
    }
    free(queue);
}