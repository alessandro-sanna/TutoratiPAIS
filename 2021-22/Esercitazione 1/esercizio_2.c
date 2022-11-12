//
// Created by alessandro on 10/22/21.
//
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


char *strrev(const char *str, int dim){
    /* capovolgo la stringa:
     * input -> "ABCDE", 5
     * output -> "EDCBA"
     * */
    char *res = (char *) malloc(sizeof(char) * (dim + 1));
    for (int i = dim - 1; i>= 0; i--) res[dim - i - 1] = str[i];
    res[dim] = 0;
    return res;
}

char *find_palindrome(const char *str1, int dim1, const char *str2, int dim2) {
    char *str2_rev = strrev(str2, dim2);
    char *str2_sub = (char *) malloc(sizeof(char) * (dim2 + 1));
    char *str1_sub;
    char *str_final = (char *) malloc(sizeof(char) * (dim1 + dim2 + 1));
    char *str2_final;
    bool found = false;

    for (int n = dim2; n >=0; n--) {
        for (int j = 0; j <= dim2 - 1; j++) {
            strncpy(str2_sub, str2_rev + j, n);
            // copio la j-esima sottostringa di lunghezza n della stringa 2 capovolta
            str2_sub[n] = 0; // carattere terminatore
            str1_sub = strstr(str1, str2_sub); // vedo se la sottostringa in esame è contenuta in stringa 1
            if (str1_sub != NULL) {
                // se ho trovato qualcosa: ho trovato quella di lunghezza massima
                str2_final = strrev(str2_sub, n); // capovolgo nuovamente la sottostringa
                strncpy(str_final, str1_sub, n + 1); // copio i caratteri che mi servono
                strcat(str_final, str2_final); // concateno
                found = true; // flag per uscire
                break;
            }
        }
        if (found) break;
    }

    free(str2_rev); free(str2_sub); free(str2_final); // libero le variabili d'appoggio create con malloc
    return str_final;
}
// str1 = "ABCDE"
// str2 = "BC"
// strstr(str1, str2) = "BCDE"