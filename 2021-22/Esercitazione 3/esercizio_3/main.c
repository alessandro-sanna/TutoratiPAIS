#include "list.h"
#include <stdio.h>

int main() {
    p_list my_l = new_list();
    my_l = new_employee(my_l);
    my_l = new_employee(my_l);
    my_l = new_employee(my_l);
    int res = confronta(my_l, 1);
    printf("\nres = %d", res);
}
/* risultato:
nome cognome dip stipendio
John
Dorian
Sacred Heart
1000.0

nome cognome dip stipendio
Chris
Turk
Sacred Heart
1200.0

nome cognome dip stipendio
Dan
Dorian
-
0.0

res = 2 ( due persone hanno lo stesso cognome )
Process finished with exit code 0
*/