#ifndef ES1
#define ES1

typedef struct { float x; float y; } punto;

/* la funzione che calcola il perimetro è l'unica che serve al main
 * perciò esporto solo quella.
 */
float get_perimeter(punto x, punto y, punto z);

extern const float pi;

#endif // ES1