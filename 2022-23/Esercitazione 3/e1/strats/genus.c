#include "genus.h"
#include <string.h>

_Bool equalGenus(p_record rec_i, p_record rec_j) {
    return strcmp(get_genere(rec_i), get_genere(rec_j)) == 0;
};