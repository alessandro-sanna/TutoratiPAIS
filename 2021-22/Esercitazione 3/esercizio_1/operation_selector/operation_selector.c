//
// Created by alessandro on 11/18/21.
//
#include <stdlib.h>
#include "operation_selector.h"
#include "add.h"
#include "sub.h"
#include "mul.h"

operation_strategy operation_selector(char operation) {
    switch (operation) {
        case '+':
            return add;
        case '-':
            return sub;
        case '*':
            return mul;
        default:
            return NULL;
    }
}