#define MAX 50

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "record.h"

// struttura dati record che contiene un singolo "employee"
struct record {
    char nome[MAX];
    char cognome[MAX];
    char dipartimento[MAX];
    float stipendio;
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

p_record new_record(void) {
    // funzione che crea il record: i campi vengono richiesti da input all'utente
    p_record new_r = (p_record) malloc(sizeof(struct record));
    printf("\nnome\ncognome\ndip\nstipendio");

    set_string(new_r->nome);
    set_string(new_r->cognome);
    set_string(new_r->dipartimento);
    scanf("%f", &new_r->stipendio);

    return new_r;
}

// funzioni getter per i campi della struttura, servono per i confronti
// nelle strategie concrete

char *get_nome(p_record my_r){
    return my_r->nome;
}
char *get_cognome(p_record my_r){
    return my_r->cognome;
}
char *get_dipartimento(p_record my_r){
    return my_r->dipartimento;
}
float get_stipendio(p_record my_r) {
    return my_r->stipendio;
}
