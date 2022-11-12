#include "elves.h"
#include "utility.h"


void elf_fight(p_character my_c) {
    int result = get_random(2);
    if (result < 1) {
        update_score(my_c, +50);
    } else {
        update_score(my_c, -50);
    }

};

void elf_defend(p_character my_c) {
    update_score(my_c, -10);
};