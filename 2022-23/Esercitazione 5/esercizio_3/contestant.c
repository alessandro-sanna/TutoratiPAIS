#include "contestant.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "__contestant_private/sort.h"

#define MAX_STRING 50

struct Contestant {
    char name[MAX_STRING];
    char surname[MAX_STRING];
    int score;
};

unsigned long dataSize = sizeof(struct Contestant);

pContestant newContestant(const char *name, const char *surname, int score){
    pContestant new;
    new = (pContestant) malloc(sizeof(*new));
    strncpy(new->name, name, MAX_STRING);
    strncpy(new->surname, surname, MAX_STRING);
    new->score = score;
    return new;
}

void delContestant(pContestant contestant) {
    free(contestant);
}

const char *getName(pContestant contestant) {
    return contestant->name;
}

const char *getSurname(pContestant contestant) {
    return contestant->name;
}

int getScore(pContestant contestant) {
    return contestant->score;
}

void sortContestants(pContestant array[], int size) {
    insertionSort(array, size, 'S');
    insertionSort(array, size, 's');
}

void printContestant(pContestant contestant) {
    printf("{%s, %s, %d}\n", contestant->name, contestant->surname, contestant->score);
}
