//
// Created by alessandro on 12/2/22.
//

#ifndef ESERCITAZIONE_3___GET_H
#define ESERCITAZIONE_3___GET_H

#include "../record.h"

typedef _Bool (*method_strategy) (p_record, p_record);
method_strategy strategy(int field);

#endif //ESERCITAZIONE_3___GET_H
