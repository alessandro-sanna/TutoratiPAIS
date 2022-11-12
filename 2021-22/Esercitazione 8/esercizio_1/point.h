//
// Created by sanna on 23/12/2021.
//

#ifndef E8_POINT_H
#define E8_POINT_H

typedef struct Point *p_point;
p_point new_point (float x, float y);
float get_distance(p_point P);
void set_origin(p_point P, p_point new_origin);

#endif //E8_POINT_H
