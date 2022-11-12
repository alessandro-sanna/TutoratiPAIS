//
// Created by alessandro on 11/18/21.
//

#ifndef ESERCITAZIONE_3_2_METHOD_SELECTOR_H
#define ESERCITAZIONE_3_2_METHOD_SELECTOR_H
#include <stdbool.h>

typedef bool (*method_strategy) (int, int);
method_strategy method_selector(int method);

#endif //ESERCITAZIONE_3_2_METHOD_SELECTOR_H
