//
// Created by alessandro on 12/2/22.
//

#include "species.h"
#include <string.h>

_Bool equalSpecies(p_record rec_i, p_record rec_j) {
    return strcmp(get_genere(rec_i), get_genere(rec_j)) == 0;
};