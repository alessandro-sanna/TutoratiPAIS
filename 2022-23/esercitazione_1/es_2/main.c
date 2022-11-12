#include "time_slot.h"

int main() {
    time_slot ts;
    ts = set_ts(ts, 16, 39);
    print_hm(ts);
    print_m(ts);
    return 0;
}
