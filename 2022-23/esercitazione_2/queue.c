#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct QueueNode *pLink;

struct QueueNode {
    int item;
    pLink next;
};

struct Queue {
    pLink head;
    pLink tail;
};

pQueue createQueue(){
    pQueue new = (pQueue) malloc(sizeof(struct Queue));
    new->head = NULL;
    new->tail = NULL;
    return new;
}

pLink createNode(int item, pLink next){
    pLink new = (pLink) malloc(sizeof(struct QueueNode));
    new->item = item;
    new->next = next;
    return new;
}

void destroyQueue(pQueue q){
    while(!isEmpty(q)) get(q);
    free(q);
};

void put(pQueue q, int item) {
    if (q->head == NULL) {
        q->tail = createNode(item, q->head);
        q->head = q->tail;
        return;
    }
    q->tail->next = createNode(item, q->tail->next);
    q->tail = q->tail->next;
};

int get(pQueue q) {
    int toReturn = q->head->item;  // *(head).item
    pLink newHead = q->head->next;
    free(q->head);
    q->head = newHead;
    return toReturn;
};

_Bool isEmpty(pQueue q) {
    return q->head == NULL;
};

void show(pQueue q){
    pLink aux = q->head;
    printf("[HEAD] [");
    while(aux != NULL) {
        printf("%d ", aux->item);
        aux = aux->next;
    }
    printf("\b] [TAIL]\n");
};