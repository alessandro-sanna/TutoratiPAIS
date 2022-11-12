#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../item.h"
#define length 50

struct Item {
    char name[length];
    int x;
};


p_item new_item(char *name, int x) {
    p_item new = (p_item) malloc(sizeof(struct Item));
    strncpy(new->name, name, length);
    new->x = x;
    return new;
};

void unknown(p_item item) {
    float avg, c_sum = 0;
    int size = (int) strnlen(item->name, length);
    for (int i = 0; i < size; i++) {
        c_sum += (float) item->name[i];
    }
    avg = c_sum / (float) size;
    for (int i = 0; i < item->x; i++) { printf("%.2f ", avg); }
    printf("\n");
};