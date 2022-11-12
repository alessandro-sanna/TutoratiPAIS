//
// Created by alessandro on 11/18/21.
//

#ifndef ESERCITAZIONE_3_2_OPERATION_SELECTOR_H
#define ESERCITAZIONE_3_2_OPERATION_SELECTOR_H
#include <stdbool.h>

typedef int (*operation_strategy) (int, int);
operation_strategy operation_selector(char operation);

#endif //ESERCITAZIONE_3_2_OPERATION_SELECTOR_H
