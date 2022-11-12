#include <stdlib.h>
#include "calcolo.h"
#include <stdbool.h>
#include <math.h>

/* il compito delle funzioni di seguito è identico a quello
 * descritto nell'esercizio 1, ma ora è implementato l'ADT
 * quindi ci sono delle differenze concettuali.
 */

/* l'implementazione della struttura dati ora è nel file.c:
 * così facendo non rendo pubblico al main dettagli implementativi.
 */
struct punto {
    float x, y;
};

p_punto new_point(float x, float y) {
    /* il main manovrerà i punti attraverso dei puntatori a struttura:
     * questa funzione consente di creare un dato di tipo punto e restituirne
     * il puntatore. Questa funzione è l'unico modo che ha il main per
     * usare il dato "punto".
     */
    p_punto new_p = (p_punto) malloc(sizeof(struct punto));
    new_p->x = x;
    new_p->y = y;
    return new_p;
}

const float pi = 3.14159;

typedef struct {
    float a,b,c;
} Edges;

float distance_points(p_punto p1, p_punto p2) {
    float x_coord, y_coord;
    float x_2, y_2;
    x_coord = p1->x - p2->x;
    y_coord = p1->y - p2->y;
    x_2 = pow(x_coord, 2);
    y_2 = pow(y_coord, 2);
    return sqrt(x_2 + y_2);
};

Edges get_edges(p_punto x, p_punto y, p_punto z) {
    Edges new_e;
    new_e.a = distance_points(x, y);
    new_e.b = distance_points(x, z);
    new_e.c = distance_points(y, z);
    return new_e;
}

bool check_triangle(p_punto x, p_punto y, p_punto z) {
    Edges e = get_edges(x, y, z);
    return (e.a + e.b > e.c) && (e.a + e.c > e.b) && (e.b + e.c > e.a);
}

float get_perimeter(p_punto x, p_punto y, p_punto z) {
    /* dato che questa funzione viene esportata, qui viene usata
     * la sintassi coi puntatori.
     * Inoltre è generalmente più rapido passare indirizzi piuttosto
     * che passare per copia tutta la struttura dati.
     */
    Edges e = get_edges(x, y, z);
    float perimeter = 0.0;
    if (check_triangle(x, y, z)) {
        perimeter = e.a + e.b + e.c;
    }
    return perimeter;
}