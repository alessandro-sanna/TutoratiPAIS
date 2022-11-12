//
// Created by alessandro on 10/22/21.
//
#include <stdlib.h>


char *join_string(const char *s1, int n1, const char *s2, int n2) {
    char *ret = (char *) malloc(sizeof(char) * (n1 + n2 + 1));
    for (int i = 0; i < n1; i++) ret[i] = s1[i]; // copio la stringa 1 da 0 a n1
    for (int i = 0; i < n2; i++) ret[n1 + i] = s2[i]; // copio la stringa 2 da 0 a n2, ma traslo l'indice di ret di n1
    ret[n1 + n2] = 0; // aggiungo il carattere terminatore
    return ret;
};