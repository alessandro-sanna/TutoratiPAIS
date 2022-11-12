//
// Created by alessandro on 10/25/21.
//

#include "esercizio_4.h"
#include <stdlib.h>
#include <stdio.h>

ptrList create(double num) {
    ptrList new_list = (ptrList) malloc(sizeof(struct List)); // alloco memoria per una struttura
    new_list->data = num; // inizializzo il primo elemento
    new_list->next = NULL; // la lista è appena stata creata: dopo non c'è NULLa
    return new_list;
}

ptrList pop(ptrList my_list, double data) {
    ptrList aux, ret, bef;
    aux = my_list;
    ret = my_list;
    while (aux != NULL && aux->data != data) {
        bef = aux; // salvo la posizione precedente in caso il prossimo elemento sia quello da eliminare
        aux = aux->next; // scorro il puntatore
    }
    if (aux != NULL && aux->data == data) { // se scorrendo la lista ho trovato "data" prima che questa finisse
        if (aux == my_list) {
            ret = my_list->next; // se devo eliminare la testa della lista, devo aggiornarla
        } else {
            bef->next = aux->next; // collego l'elemento prima di aux a quello dopo aux
        }
        free(aux); // free sull'elemento eliminato
    }
    return ret;
}

void print(ptrList my_list) {
    ptrList aux;
    aux = my_list;
    while (aux != NULL) {
        printf("%2f ", aux->data); // stampa elemento corrente
        aux = aux->next; // scorri
    }
    printf("\n");
}

ptrList push_head(ptrList my_list, double data) {
    ptrList new;
    new = (ptrList) malloc(sizeof(struct List)); // crea nuovo elemento
    new->data = data; // imposta il dato
    new->next = my_list; // il nuovo elemento è la nuova testa: il suo next è la vecchia testa
    return new; // la nuova testa va aggiornata
}

void push_tail(ptrList my_list, double data) {
    ptrList aux, new;
    aux = my_list;
    while (aux->next != NULL) {
        aux = aux->next; // scorri fino all'ultimo elemento esistente
    }
    new = (ptrList) malloc(sizeof(struct List)); // crea l'elemento
    new->data = data; // imposta il dato
    new->next = NULL; // il nuovo elemento è la nuova coda: dopo non c'è niente
    aux->next = new; // il vecchio elemento è la vecchia coda: il suo next è il nuovo elemento
}