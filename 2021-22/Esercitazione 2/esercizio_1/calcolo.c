#include <stdbool.h>
#include <math.h>
#include "calcolo.h"

const float pi = 3.14159;

/* struttura dati usata per comodità, serve
 * per far ritornare artificiosamente 3 valori
 * in una volta sola alla funzione che calcola i
 * lati del triangolo
 */
typedef struct {
    float a,b,c;
} Edges;

float distance_points(punto p1, punto p2) {
    /* funzione che calcola la distanza fra due punti:
     * radice di [(x2 - x1)^2 + (y2 - y1)^2]
     */
    float x_coord, y_coord;
    float x_2, y_2;
    x_coord = p1.x - p2.x;
    y_coord = p1.y - p2.y;
    x_2 = pow(x_coord, 2);
    y_2 = pow(y_coord, 2);
    return sqrt(x_2 + y_2);
};

Edges get_edges(punto x, punto y, punto z) {
    /* funzione che calcola i lati: invoco 3 volte
     * distance_points e salvo i risultati nella struttura
     * dati di tipo Edges, poi ritorno quella
     */
    Edges new_e;
    new_e.a = distance_points(x, y);
    new_e.b = distance_points(x, z);
    new_e.c = distance_points(y, z);
    return new_e;
}

bool check_triangle(punto x, punto y, punto z) {
    /* funzione che implementa la diseguaglianza triangolare:
     * la somma di qualunque coppia di lati è maggiore del terzo.
     * Visto che stiamo parlando di triangoli, questo è il
     * modo più rapido.
     */
    Edges e = get_edges(x, y, z);
    return (e.a + e.b > e.c) && (e.a + e.c > e.b) && (e.b + e.c > e.a);
}

float get_perimeter(punto x, punto y, punto z) {
    /* funzione che calcola il perimetro: inizialmente lo setto
     * a zero, poi se il triangolo esiste lo aggiorno.
     */
    Edges e = get_edges(x, y, z);
    float perimeter = 0.0;
    if (check_triangle(x, y, z)) {
        perimeter = e.a + e.b + e.c;
    }
    return perimeter;
}