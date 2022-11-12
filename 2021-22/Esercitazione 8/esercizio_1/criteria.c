//
// Created by sanna on 23/12/2021.
//

#include "criteria.h"

_Bool rising(float a, float b) { return a < b; }
_Bool decreasing(float a, float b) { return a > b; }

criterion get_criterion(char target) {
    return (target == '<') ? rising : decreasing;
};