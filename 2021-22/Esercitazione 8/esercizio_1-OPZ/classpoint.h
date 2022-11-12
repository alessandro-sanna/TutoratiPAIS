//
// Created by sanna on 23/12/2021.
//

#ifndef E8_CLASSPOINT_H
#define E8_CLASSPOINT_H
#include "../esercizio_1/point.h"
typedef struct ClassPoint *p_classpoint;
p_classpoint new_cp(p_point point, int class);
int classify(p_point target, p_classpoint training_set[], int size, int k_neighbors);
p_point get_point(p_classpoint cp);
#endif //E8_CLASSPOINT_H
