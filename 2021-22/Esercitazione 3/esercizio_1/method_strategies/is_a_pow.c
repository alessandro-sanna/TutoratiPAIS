//
// Created by alessandro on 11/18/21.
//

#include "is_a_pow.h"
#include <math.h>

double log_x_y(int x, int base) {
    return log(x) / log(base);
}

bool is_a_pow(int data, int target) {
    double t = log_x_y(data, target);
    int rounded = (int) t;
    double diff = t - (double) rounded;
    return diff == 0;
}