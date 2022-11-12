#include "select_equivalents.h"
#include <stdlib.h>
#include "strategies/all_strategies.h"

method_strategy select_equivalents(int field){
    // funzione che decide la strategia e ritorna il
    // puntatore ad essa: method_strategy è un alias per il tipo
    // "puntatore ad una funzione X che ritorna un dato di tipo
    // bool e prende in ingresso due dati di tipo p_record".
    switch (field) {
        case 0:
            return equivalents_by_name;
        case 1:
            return equivalents_by_surname;
        case 2:
            return equivalents_by_department;
        case 3:
            return equivalents_by_paycheck;
        default:
            return NULL;
    }
}