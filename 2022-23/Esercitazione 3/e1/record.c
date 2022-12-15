#define MAX 50

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "record.h"

// struttura dati record che contiene un singolo "employee"
struct record {
    char genere[MAX];
    char specie[MAX];

    _Bool fiore;
};

void set_string(char *string) {
    // funzione di comodo per essere
    // sicuri che l'acquisizione della stringa
    // da input vada a buon fine
    do {
        fgets(string, MAX, stdin);
        string[strcspn(string, "\r\n")] = 0;
    } while(string[0] == 0);
}

p_record new_record(char *genere, char *specie, _Bool fiore) {
    // funzione che crea il record: i campi vengono richiesti da input all'utente
    p_record new_r = (p_record) malloc(sizeof(struct record));
    strncpy(new_r->genere, genere, MAX);
    strncpy(new_r->genere, genere, MAX);
    new_r->fiore = fiore;

    return new_r;
}

// funzioni getter per i campi della struttura, servono per i confronti
// nelle strategie concrete

char *get_genere(p_record my_r){
    return my_r->genere;
}
char *get_specie(p_record my_r){
    return my_r->specie;
}
_Bool get_fiore(p_record my_r){
    return my_r->fiore;
}

