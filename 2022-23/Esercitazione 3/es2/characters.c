#define MAX 50
#include "characters.h"
#include "risky.h"
#include "careful.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// struttura personaggio che userò nel codice
struct character {
    char nome[MAX];
    int score;
    // "fight_strategy" è un puntatore a una funzione X che rende un void
    // (cioè niente) e prende in ingresso un solo dato, di tipo p_character
    void (*play) (p_character, int);
};

p_character create_character(void) {
    p_character new_c = (p_character) malloc(sizeof(struct character));
    int race;
    fflush(stdin);

    printf("NOME? ");
    do {
        fgets(new_c->nome, MAX, stdin);
    } while (strnlen(new_c->nome, MAX) < 2);

    printf("CLASSE? ");
    // chiedo la classe fino a quando l'utente non ne inserisce
    // una valida
    do {
        scanf("%d", &race);
    } while (race != 0  && race != 1);

    fflush(stdin);
    new_c->score = 0;

    switch(race) {
        /* in questo switch-case si svolge lo method_strategy:
         * a seconda della classe all'oggetto vengono assegnate
         * le funzioni concrete corrette: quelle dell'elfo o del nano
         * */
        case 0: // risky
            new_c->play = risky_play;
            break;
        case 1: // careful
            new_c->play = careful_play;
            break;
        default:
            break;
    }
    return new_c;
}

void play(p_character p_c, int iDeclared) {
    p_c->play(p_c, iDeclared);
};

void update_score(p_character p_c, int modifier) {
    // funzione che fa da getter e setter per il dato "score"
    // serve alle strategie concrete per manipolare il
    // punteggio senza rivelare la struttura dati
    p_c->score = p_c->score + modifier;
}

void check_game(p_character p_c) {
    // funzione che termina il gioco
    bool game_over = false;
    if (p_c->score >= 500) {
        printf("VITTORIA\n");
        game_over = true;
    }

    if (game_over) {
        // exit(CODE) termina il processo che la evoca
        // con codice di errore CODE, 0 significa che
        // non ci sono errori.
        free(p_c);
        exit(0);
    }
}

int get_score(p_character p_c) {
    return p_c->score;
}