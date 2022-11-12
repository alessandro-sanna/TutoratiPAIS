#include "process.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX 50

struct Process {
    char name[MAX];
    int priority;
};

p_process new_process(char *name, int priority) {
    p_process new = (p_process) malloc(sizeof(struct Process));
    new->priority = priority;
    strncpy(new->name, name, MAX);
    return new;
}

int get_priority(p_process process) {
    return process->priority;
}

char *get_name(p_process process) {
    return process->name;
}

void set_priority(p_process process, int amount) {
    process->priority = amount;
}

void printf_p(p_process process) {
    printf("[%s: %d]",
           process->name,
           process->priority);
}