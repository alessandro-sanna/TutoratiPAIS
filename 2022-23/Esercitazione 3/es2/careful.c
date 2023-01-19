#include <stdio.h>
#include "careful.h"
#include "utility.h"


void careful_play(p_character my_c, int iDeclared) {
    iDeclared = validate(iDeclared, 1, 20);
    int result = get_random(6) + 1;
    char choice;
    printf("Play? (y/n) ");
    do {
        scanf("%c", &choice);
    } while (choice != 'y' && choice != 'n');

    if (choice == 'y') {
        if (result > 4) {
            iDeclared *= -1;
		}
        update_score(my_c, iDeclared);
    }


};
