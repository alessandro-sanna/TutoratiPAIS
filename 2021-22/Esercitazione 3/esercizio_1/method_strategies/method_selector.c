//
// Created by alessandro on 11/18/21.
//
#include <stdlib.h>
#include "method_selector.h"
#include "is_a_multiple.h"
#include "is_greater.h"
#include "is_a_pow.h"

method_strategy method_selector(int method) {
    switch (method) {
        case 0:
            return is_a_multiple;
        case 1:
            return is_a_pow;
        case 2:
            return is_greater;
        default:
            return NULL;
    }
};