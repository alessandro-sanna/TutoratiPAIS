//
// Created by alessandro on 10/22/21.
//

#include <stdlib.h>

int find_index_one(const int *vett, int dim, int ind_0, int target) {
    /* primo sottoproblema: scorro tutti gli ind_0 in ordine:
     * appena trovo un ind_1 adatto lo ritorno perché il primo che trovo
     * è il più vicino visto che sto scorrendo in modo lineare.
     */
    for(int ind_1 = (ind_0 + 1); ind_1 < dim; ind_1++) {
        if(vett[ind_0] + vett[ind_1] == target) return ind_1;
    }
    return -1; // se non ho trovato nulla ritorno un codice di errore
}

int distance(int a, int b){
    return abs(a - b); // distanza tra due numeri
}

int update_indexes(int *min_pair, int ind_0, int ind_1, int min_dist) {
    /* secondo sottoproblema:
     * aggiorno gli indici trovati con find_index_one fino a che non trovo quelli
     * con distanza minore
     */
    if (ind_1 > -1 && distance(ind_0, ind_1) < min_dist) {
        // se gli indici sono validi e se distanza vale meno della minima trovata
        min_dist = distance(ind_0, ind_1);
        min_pair[0] = ind_0;
        min_pair[1] = ind_1;
    }
    return min_dist;
};

int *find_closer_pair(int *vett, int dim, int target) {
    int ind_0, ind_1;
    int *min_pair = (int *) malloc(sizeof(int) * 2); // so che devo cercare due indici
    min_pair[0] = -1; // inizializzo con valore di errore
    min_pair[1] = -1;
    int min_dist = dim; // la massima distanza possibile tra due elementi di un vettore è dim

    for(ind_0 = 0; ind_0 < dim - 1; ind_0++) {
        ind_1 = find_index_one(vett, dim, ind_0, target); // primo problema: ind_1
        min_dist = update_indexes(min_pair, ind_0, ind_1, min_dist); // secondo problema: min_dist
        if (min_dist == 1) break; // se min_dist == 1, ho la distanza minima possibile tra due indici: interrompo
    }

    return min_pair;
}