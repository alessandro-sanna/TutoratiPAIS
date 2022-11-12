#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../item.h"
#define length 50

struct Item {
    char name[length];
    int x;
    int y;
};


p_item new_item(char *name, int x) {
    p_item new = (p_item) malloc(sizeof(struct Item));
    strncpy(new->name, name, length);
    new->x = x;
    new->y = 10;
    return new;
};

void unknown(p_item item) {
    int size = (int) strnlen(item->name, length);
    _Bool condition = (item->x + item->y) == size;
    if (condition) { printf("%s", item->name); }
    else { printf("Impossible"); }
    printf("\n");
}