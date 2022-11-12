//
// Created by sanna on 23/12/2021.
//

#include "point.h"
#include <stdlib.h>
#include <math.h>

struct Point {
    float x;
    float y;
    float distance;
    p_point Origin;
};

struct Point Origin = {0.0, 0.0, 0.0, (p_point) NULL};

float distance_points(p_point P, p_point Q) {
    float x_coord = pow(P->x - Q->x, 2);
    float y_coord = pow(P->y - Q->y, 2);
    return sqrt(x_coord + y_coord);
}

p_point new_point (float x, float y) {
    p_point new = (p_point) malloc(sizeof(struct Point));
    new->x = x;
    new->y = y;
    new->Origin = &Origin;
    new->distance = distance_points(new, new->Origin);
    return new;
}

float get_distance(p_point P) {
    return P->distance;
}

void set_origin(p_point P, p_point new_origin) {
    P->Origin = new_origin;
    P->distance = distance_points(P, new_origin);
}