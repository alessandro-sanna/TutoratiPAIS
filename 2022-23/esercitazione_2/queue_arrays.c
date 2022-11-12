#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
#define MAXQUEUE 100

struct Queue {
    int head;
    int tail;
    int memory[MAXQUEUE];
    int numberOfElements;
};

pQueue createQueue() {
    pQueue new = (pQueue) malloc(sizeof(struct Queue));
    new->head = 0;
    new->tail = 0;
    new->numberOfElements = 0;
    return new;
};

void destroyQueue(pQueue q) {
    free(q);
};

void put(pQueue q, int item) {
    q->memory[q->tail++] = item;
    q->numberOfElements += 1;
};

int get(pQueue q) {
    int item = q->memory[q->head++];
    q->numberOfElements--;
    return item;
};

_Bool isEmpty(pQueue q) {
    return q->numberOfElements == 0;
};

void show(pQueue q) {
    printf("[HEAD] [");
    for (int i = q->head; i < q->tail; i++) {
        printf("%d ", q->memory[i]);
    }
    printf("\b] [TAIL]\n");
};