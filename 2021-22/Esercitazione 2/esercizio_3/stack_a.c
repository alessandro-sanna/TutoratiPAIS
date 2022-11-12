#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX_ARRAY 500
#define ERROR_CODE -1

/* concettualmente le funzioni sono identiche,
 * cambia l'implementazione.
 */

// non c'è più la struct list: ora sto usando un array statico

struct stack {
    int content[MAX_ARRAY];
    int elements;
};

p_stack new_stack(void) {
    /* la new_stack rimane identica, solo non setto più
     * content a NULL (è un array, l'indirizzo di content ora
     * è un dato costante, se lo cambiassi riceverei un errore).
     */
    printf("ARRAYS\n");
    p_stack new_s = (p_stack) malloc(sizeof(struct stack));
    new_s->elements = 0;
    return new_s;
};

int push (p_stack s, int n) {
    /* la push ora semplicemente setta il vettore per posizione.
     * Infatti, se ci sono 0 elementi, il prossimo elemento da settare
     * sarà il primo ( == quello "con indice 0" ). Incremento elements
     * e faccio scorrere così lo stack.
     */
    s->content[s->elements++] = n;
    return s->elements;
};

int pop (p_stack s) {
    /* la pop ora "elimina" semplicemente decrementando elements.
     * Infatti, se ci sono 3 elementi, quando faccio una pop elements diventa 2
     * la prossima volta che faccio una push sovrascriverò il dato con indice 2
     * che è il terzo, cioè quello che ho eliminato.
     */
    if (s->elements <= 0) { return ERROR_CODE; }
    int deleted = s->content[--(s->elements)];
    return deleted;
};

void print_stack (p_stack s) {
    printf("Stack at 0x%x is {", s);
    for (int i = s->elements - 1; i >= 0; i--) {
        printf(" %d ", s->content[i]);
    }
    printf("}\n");
};