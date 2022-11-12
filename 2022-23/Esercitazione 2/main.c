#include <stdio.h>
#include "queue.h"

int main() {
    pQueue myQ = createQueue();
    printf("\nisEmpty? %d", isEmpty(myQ));

    put(myQ, 1);
    put(myQ, 2);
    put(myQ, 3);
    put(myQ, 4);
    put(myQ, 5);

    printf("\nisEmpty? %d\n\n", isEmpty(myQ));

    show(myQ);
    printf("\n\nGET: %d\n\n", get(myQ));
    show(myQ);

    destroyQueue(myQ);
    // get(myQ);  // mi aspetto che dia errore
    return 0;
}
