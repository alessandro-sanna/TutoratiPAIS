#include "equivalents_by_paycheck.h"

bool equivalents_by_paycheck(p_record rec_i, p_record rec_j) {
    return get_stipendio(rec_i) == get_stipendio(rec_j);
};
