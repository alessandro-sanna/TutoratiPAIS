#include <stdbool.h>
#include <stdio.h>
#include "characters.h"

int main() {
    p_character my_c;
    my_c = create_character();

    int choice;
    while(true) {
        // il programma continua fino a quando
        // o l'utente non termina (opzione 2) o la partita
        // non termina (check_game chiama exit)
        printf("\n0.fight\n1.defend\n2.exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                fight(my_c);
                break;
            case 1:
                defend(my_c);
                break;
            case 2:
                printf("GOODBYE!\n");
                return 0;
            default:
                printf("WRONG\n");
                break;
        }
        check_game(my_c);
        printf("\nscore is: %d", get_score(my_c));
    }

}
/* risultato:
NOME?
Alessandro
CLASSE?
0 // elfo

0.fight
1.defend
2.exit
0

score is: 150
0.fight
1.defend
2.exit
1

score is: 140
0.fight
1.defend
2.exit
0

score is: 190
0.fight
1.defend
2.exit
1

score is: 180
0.fight
1.defend
2.exit
0

score is: 130
0.fight
1.defend
2.exit
0

score is: 180
0.fight
1.defend
2.exit
0

score is: 130
0.fight
1.defend
2.exit
0

score is: 80
0.fight
1.defend
2.exit
0

score is: 30
0.fight
1.defend
2.exit
0

score is: 80
0.fight
1.defend
2.exit
0

score is: 30
0.fight
1.defend
2.exit
0
SCONFITTA

Process finished with exit code 0
*/