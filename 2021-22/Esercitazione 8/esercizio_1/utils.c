//
// Created by sanna on 23/12/2021.
//

#include "utils.h"

void swap(p_point *P, p_point *Q) {
    p_point tmp = *P;
    *P = *Q;
    *Q = tmp;
};