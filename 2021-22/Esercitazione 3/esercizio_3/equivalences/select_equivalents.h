#ifndef SEL_H
#define SEL_H

#include "../record.h"
#include <stdbool.h>

typedef bool (*method_strategy) (p_record, p_record);
method_strategy select_equivalents(int field);

#endif