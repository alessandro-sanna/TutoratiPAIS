#include <stdlib.h>
#include "record.h"
#include "list.h"
#include "equivalences/select_equivalents.h"

// struttura dati lista che verrà usata per conservare i record
struct list {
    p_record data;
    struct list *next;
};

p_list new_list(void) {
    // creo il puntatore alla lista
    p_list new_l = (p_list) malloc(sizeof(struct list));
    new_l->next = NULL;
    new_l->data = NULL;
    return new_l;
}

p_list new_employee(p_list my_l) {
    // inserisco il nuovo elemento nella lista
    p_list new_el;
    p_list current = my_l;

    if (my_l->data == NULL) {
        // tengo conto del caso particolare in
        // cui la lista sia stata appena creata
        my_l->data = new_record();
        return my_l;
    }

    new_el = (p_list) malloc(sizeof(struct list));
    new_el->data = new_record();
    new_el->next = current;

    return new_el;
}

int confronta (p_list my_l, int field) {
    /* funzione obiettivo dell esercizio:
     * scansiona la lista e ritorna il numero di
     * persone con lo stesso "campo" (nome, cognome...)
     * Qui si è scelto di ritornare il massimo.
     */
    p_list aux_i = my_l;
    p_list aux_j;
    p_record rec_i, rec_j;

    int max = 1, current = 1;

    bool are_equal;
    method_strategy equivalents = select_equivalents(field);

    while(aux_i != NULL) {
        // ciclo più esterno. Fisso il primo indice.
        // se fosse un vettore di interi, aux_i sarebbe i
        // e rec_i sarebbe array[i].
        rec_i = aux_i->data;
        aux_j = aux_i->next;
        while(aux_j != NULL) {
            // ciclo più esterno. Fisso il primo indice.
            // se fosse un vettore di interi, aux_j sarebbe j = i+1
            // e rec_j sarebbe array[j].
            rec_j = aux_j->data;
            // dato che devo decidere a runtime secondo quale criterio
            // i due record siano equivalenti, nel codice uso un puntatore
            // a funzione che contiene l'indirizzo della funzione corretta
            are_equal = equivalents(rec_i, rec_j);
            if (are_equal) {
                current++;
            }
            aux_j = aux_j->next;
        }
        if (current > max) {
            max = current;
        }
        current = 1;
        aux_i = aux_i->next;
    }

    return max;
}

