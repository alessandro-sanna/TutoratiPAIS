#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#define ERROR_CODE -1

// implementazione di stack.c con le liste concatenate

/* struttura dati custom per definire le liste
 * concatenate: verrà manovrata con l'inserimento "in testa"
 */
typedef struct list {
    int data;
    struct list *next;
} *p_list;

/* implementazione della struttura dati "stack"
 * il cui puntatore di riferimento è nel file.h
 */
struct stack {
    p_list content; // il contenuto dello stack -> il puntatore alla testa della lista
    int elements; // il numero di elementi
};

p_stack new_stack(void) {
    /* (il "void" nella firma serve a specificare che
     * la funzione ha esattamente zero argomenti in ingresso)
     * funzione che crea un nuovo stack: setta i campi al default
     * (stack vuoto = 0 elementi e lista a NULL)
     */
    printf("CHAINLIST\n"); // printf di comodo per verificare quale implementazione stiamo usando
    p_stack new_s = (p_stack) malloc(sizeof(struct stack));
    new_s->content = NULL;
    new_s->elements = 0;
    return new_s;
}

int push (p_stack s, int n) {
    /* funzione per inserire un elemento:
     * ritorno il numero di elementi nello stack dopo
     * l'inserimento.
     */
    p_list current = s->content; // salvo la testa della lista
    p_list new = (p_list) malloc(sizeof(struct list)); // creo un nuovo elemento
    new->data = n; // data prende il numero da pushare
    new->next = current; // next prende l'attuale testa della lista
    s->content = new; // la nuova testa della lista diventa il nuovo elemento
    s->elements++;
    return s->elements;
};

int pop (p_stack s) {
    if (s->elements <= 0) { return ERROR_CODE; } // se non ci sono elementi ritorna "ERRORE" ed esci
    p_list aux = s->content; // salvo la testa (cioè l'elemento da togliere: è uno stack)
    int deleted = aux->data; // salvo il dato che sto togliendo per ritornarlo
    aux = aux->next; // avanzo il puntatore ausiliare di una posizione
    free(s->content); // dereferenzio il dato da eliminare
    s->content = aux; // la nuova testa della lista diventa il secondo elemento
    s->elements--;
    return deleted;
};

void print_stack (p_stack s) {
    /* scorri tutta la lista
     * e stampa i "data"
     */
    p_list aux = s->content;
    printf("Stack at 0x%x is {", s);
    while (aux != NULL) {
        printf(" %d ", aux->data);
        aux = aux->next;
    }
    printf("}\n");
};