#include "time_slot.h"
#include <stdio.h>

int main() {
    p_time_slot a, b, result;
    // setto a
    a = create_ts();
    set_ts(a, 999);
    print_hm(a);
    print_min(a);
    // setto b
    b = create_ts();
    set_ts(b, 555);
    print_hm(b);
    print_min(b);
    // somma normale: c = a + b
    result = create_ts();
    sum_ts(result, a, b);
    print_hm(result);
    print_min(result);
    // somma accumulo: a += b
    sum_ts(a, a, b);
    print_hm(a);
    print_min(a);
    // sum a, a, b;
    destroy_ts(a);
    destroy_ts(b);
    destroy_ts(result);
    return 0;
}
