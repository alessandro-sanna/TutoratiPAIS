#include "contestant.h"
#include "utils.h"


int main() {
    pContestant array[] = {
            newContestant("Francesco", "Verdi", 93),
            newContestant("Mario", "Rossi", 100),
            newContestant("Mattia", "Ferrari", 91),
            newContestant("Andrea", "Bianchi", 100)
    };
    int size = 4;

    printArray(array, size);
    sortContestants(array, size);
    printArray(array, size);

    for (int i = 0; i < size; ++i) delContestant(array[i]);
    return 0;
}
