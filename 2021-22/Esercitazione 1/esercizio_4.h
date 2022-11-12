//
// Created by alessandro on 10/22/21.
//

#ifndef LEZ22OTTOBRE_ESERCIZIO_4_H
#define LEZ22OTTOBRE_ESERCIZIO_4_H

typedef struct List {
    double data;
    struct List *next;
} *ptrList;

ptrList create(double num);
void print(ptrList my_list);
ptrList pop(ptrList my_list, double data);
void push_tail(ptrList my_list, double data);
ptrList push_head(ptrList my_list, double data);

#endif //LEZ22OTTOBRE_ESERCIZIO_4_H
