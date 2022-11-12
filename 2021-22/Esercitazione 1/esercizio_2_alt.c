//
// Created by alessandro on 10/25/21.
//

#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "esercizio_2.h"

int number_of_substring(int length) {
    return length * (length+1) / 2;
}

char **all_substrings(char *string, int *container_size) {
    int length = (int) strlen(string);
    *container_size = number_of_substring(length);
    char **container = (char **) malloc(sizeof(char *) * (*container_size));
    // alloco un elenco di stringhe
    int index = 0;
    for (int k = length; k > 0; k--) {
        for (int sub_start = 0; sub_start < length - k + 1; sub_start++) {
            // il numero di sottostringhe di lunghezza k in una stringa di lunghezza l è l - k + 1
            container[index] = (char *) malloc(sizeof(char) * (length + 1));
            strncpy(container[index], string + sub_start, k);
            // copio la sottostringa di lunghezza k: prima quella che inizia a 0, poi quella a 1, ecc.
            container[index][k] = 0; // carattere terminatore
            index++;
        }

    }
    return container;
}

bool is_palindrome(char *string) {
    int length = (int) strlen(string);
    for (int i = 0; i < length / 2 + 1; i++) {
        if (string[i] != string[length - 1 - i]) return false;
    }
    return true;
}

char *find_alter(char *string_1, char *string_2) {
    int container_size_1, container_size_2;
    char **container_1 = all_substrings(string_1, &container_size_1);
    char **container_2 = all_substrings(string_2, &container_size_2);
    // dato che in C non si possono ritornare due cose, do in ingresso un indirizzo su cui la funzione scrive,
    // in questo caso il numero totale di sottostringhe associate a string_i
    char *result = (char *) malloc(sizeof(char) * (strlen(string_1) + strlen(string_2) + 1));
    char *temp = (char *) malloc(sizeof(char) * (strlen(string_1) + strlen(string_2) + 1));
    int max_length = 0;

    for (int i = 0; i < container_size_1; i++) {
        for (int j = 0; j < container_size_2; j++) {
            strcpy(temp, container_1[i]);
            strcat(temp, container_2[j]); // costruisco la stringa temporanea
            if (is_palindrome(temp) && strlen(temp) > max_length) {
                // se è palindroma e se è più lunga, temp diventa il nuovo risultato
                strcpy(result, temp);
                max_length = (int) strlen(temp);
            }
            if (i == container_size_1 - 1) free(container_2[j]); // devo liberarla perchè non la userò più
        }
        free(container_1[i]); // devo liberarla perchè non la userò più
    }

    free(temp); //libero la variabile temporanea
    return result;
}
