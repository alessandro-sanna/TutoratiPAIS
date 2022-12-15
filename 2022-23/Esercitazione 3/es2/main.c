#include <stdbool.h>
#include <stdio.h>
#include "characters.h"

int main() {
    p_character players[] = {create_character(), create_character()};

    int choice;
    int turns = 0;
    int iDeclared;
    while(true) {
        // il programma continua fino a quando
        // o l'utente non termina (opzione 2) o la partita
        // non termina (check_game chiama exit)
        printf("\n0.play\n1.exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Declare: ");
                scanf("%d", &iDeclared);
                fflush(stdin);
                play(players[turns % 2], iDeclared);
                break;
            case 1:
                printf("GOODBYE!\n");
                return 0;
            default:
                printf("WRONG\n");
                break;
        }
        check_game(players[turns % 2]);
        printf("\nscore is: %d", get_score(players[turns % 2]));
        turns++;
    }

}
