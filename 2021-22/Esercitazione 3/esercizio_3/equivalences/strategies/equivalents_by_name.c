#include "equivalents_by_name.h"
#include <string.h>

bool equivalents_by_name(p_record rec_i, p_record rec_j) {
    return strcmp(get_nome(rec_i), get_nome(rec_j)) == 0;
};