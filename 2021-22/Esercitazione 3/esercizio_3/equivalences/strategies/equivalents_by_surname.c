#include "equivalents_by_surname.h"
#include <string.h>

bool equivalents_by_surname(p_record rec_i, p_record rec_j) {
    return strcmp(get_cognome(rec_i), get_cognome(rec_j)) == 0;
};