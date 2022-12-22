#ifndef UNTITLED3_CONTESTANT_H
#define UNTITLED3_CONTESTANT_H

typedef struct Contestant *pContestant;

pContestant newContestant(const char *name, const char *surname, int score);
void delContestant(pContestant contestant);

const char *getName(pContestant contestant);
const char *getSurname(pContestant contestant);
int getScore(pContestant contestant);

void sortContestants(pContestant array[], int size);
void printContestant(pContestant contestant);

extern unsigned long dataSize;
#endif //UNTITLED3_CONTESTANT_H
