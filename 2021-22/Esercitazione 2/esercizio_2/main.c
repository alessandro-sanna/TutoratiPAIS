#include "calcolo.h"
#include <stdio.h>

int main() {

    p_punto p1 = new_point(0, 0);
    p_punto p2 = new_point(1, 1);
    p_punto p3 = new_point(2, 2);

    p_punto q1 = new_point(0, 0);
    p_punto q2 = new_point(2, 0);
    p_punto q3 = new_point(1, 1);

    float per1 = get_perimeter(p1, p2, p3);
    float per2 = get_perimeter(q1, q2, q3);

    printf("per1=%f\nper2=%f\n", per1, per2);
    printf("pi=%f", pi);

}