#include <stdio.h>
#include "calcolo.h"

int main() {
    /* dato che ho reso pubblica l'implementazione della
     * struttura, posso usare la sintassi interna di C e
     * inizializzare i punti in modo simile a vettori.
     */
    punto p1 = {0, 0};
    punto p2 = {1, 1};
    punto p3 = {2, 2};

    punto q1 = {0, 0};
    punto q2 = {2, 0};
    punto q3 = {1, 1};

    float per1 = get_perimeter(p1, p2, p3);
    float per2 = get_perimeter(q1, q2, q3);

    printf("per1=%f\nper2=%f\n", per1, per2);
    printf("pi=%f", pi);
    /* risultato:
     * per1=0.000000
     * per2=4.828427
     * pi=3.141590
     */
}