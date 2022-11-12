#include "dwarves.h"
#include "utility.h"


void dwarf_fight(p_character my_c) {
    // strategia concreta dell'attacco del nano
    // il punteggio è modificato tramite update_score
    int result = get_random(4);
    if (result < 3) {
        update_score(my_c, +20);
    } else {
        update_score(my_c, -20);
    }

};

void dwarf_defend(p_character my_c) {
    // strategia concreta della difesa del nano
    update_score(my_c, -20);
};