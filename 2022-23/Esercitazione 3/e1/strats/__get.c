#include "__get.h"
#include <stdlib.h>
#include "flower.h"
#include "genus.h"
#include "species.h"

method_strategy strategy(int field){
    // funzione che decide la strategia e ritorna il
    // puntatore ad essa: method_strategy è un alias per il tipo
    // "puntatore ad una funzione X che ritorna un dato di tipo
    // bool e prende in ingresso due dati di tipo p_record".
    switch (field) {
        case 0:
            return equalFlower;
        case 1:
            return equalGenus;
        case 2:
            return equalSpecies;
        default:
            return NULL;
    }
}