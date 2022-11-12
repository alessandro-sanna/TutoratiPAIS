#ifndef UNTITLED1_QUEUE_H
#define UNTITLED1_QUEUE_H

typedef struct Queue *pQueue;

pQueue createQueue();
void destroyQueue(pQueue q);
void put(pQueue q, int item);
int get(pQueue q);
_Bool isEmpty(pQueue q);

void show(pQueue q);
#endif //UNTITLED1_QUEUE_H
