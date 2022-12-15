#include <time.h>
#include <stdlib.h>

// funzione di comodo che seleziona il "numero random"
// richiesto dal testo ("ha successo al X%...")
// è in un file separato perchè la usano più moduli

int get_random(int range) {
    srand(time(NULL));
    return rand() % range;
}

int validate(int iDeclared, int min, int max) {
    if (iDeclared < min) iDeclared = min;
    if (iDeclared > max) iDeclared = max;
    return iDeclared;
};
