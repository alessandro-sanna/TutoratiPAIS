#include "risky.h"
#include "utility.h"


void risky_play(p_character my_c, int iDeclared) {
    iDeclared = validate(iDeclared, 1, 50);
    int result = get_random(2);
    if (result < 1) {
        update_score(my_c, +iDeclared);
    } else {
        update_score(my_c, - (2 * iDeclared));
    }
}