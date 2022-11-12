#define MAX 50
#include "characters.h"
#include "characters/all_characters.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// struttura personaggio che userò nel codice
struct character {
    char nome[MAX];
    int score;
    // "fight_strategy" è un puntatore a una funzione X che rende un void
    // (cioè niente) e prende in ingresso un solo dato, di tipo p_character
    void (*fight_strategy) (p_character);
    void (*defend_strategy) (p_character);
};

p_character create_character(void) {
    p_character new_c = (p_character) malloc(sizeof(struct character));
    int race;

    printf("NOME?\n");
    fgets(new_c->nome, MAX, stdin);
    printf("CLASSE?\n");
    // chiedo la classe fino a quando l'utente non ne inserisce
    // una valida
    do {
        scanf("%d", &race);
    } while (race != 0  && race != 1);

    new_c->score = 100;

    switch(race) {
        /* in questo switch-case si svolge lo method_strategy:
         * a seconda della classe all'oggetto vengono assegnate
         * le funzioni concrete corrette: quelle dell'elfo o del nano
         * */
        case 0: // elf
            new_c->fight_strategy = elf_fight;
            new_c->defend_strategy = elf_defend;
            break;
        case 1: // dwarf
            new_c->fight_strategy = dwarf_fight;
            new_c->defend_strategy = dwarf_defend;
            break;
        default:
            break;
    }
    return new_c;
}

void fight(p_character p_c) {
    // funzione astratta che richiama la strategia concreta:
    // il main vede solo questa
    p_c->fight_strategy(p_c);
};

void defend(p_character p_c) {
    p_c->defend_strategy(p_c);
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
    if (p_c->score >= 200) {
        printf("VITTORIA\n");
        game_over = true;
    }
    if (p_c->score <= 0) {
        printf("SCONFITTA\n");
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