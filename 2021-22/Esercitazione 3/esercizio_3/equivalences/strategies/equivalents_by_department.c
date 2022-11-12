#include "equivalents_by_department.h"
#include <string.h>

// strategia concreta per il dipartimento: le altre sono identiche,
// cambia il dato di confronto. strcmp rende 0 se le stringhe sono uguali.

bool equivalents_by_department(p_record rec_i, p_record rec_j) {
    return strcmp(get_dipartimento(rec_i), get_dipartimento(rec_j)) == 0;
};
