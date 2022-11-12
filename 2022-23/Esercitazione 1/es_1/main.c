#include <stdio.h>

/*
typedef struct {
    int minutes;
} time_slot;

time_slot set_ts(time_slot ts, int minutes){
    ts.minutes = minutes;
    return ts;
}

void print_m(time_slot ts){
    printf("%d\n", ts.minutes);
}

void print_hm(time_slot ts){
    int hours = ts.minutes / 60;
    int min_remainder = ts.minutes - hours * 60;
    printf("%d:%d\n", hours, min_remainder);
}
*/

typedef struct {
    int hours;
    int minutes;
} time_slot;

time_slot set_ts(time_slot ts, int minutes) {
    ts.minutes = minutes;
    int hours = ts.minutes / 60;
    int min_remainder = ts.minutes - hours * 60;
    ts.hours = hours;
    ts.minutes = min_remainder;
    return ts;
}

void print_m(time_slot ts){
    int min_total = ts.hours * 60 + ts.minutes;
    printf("%d\n", min_total);
}

void print_hm(time_slot ts){
    printf("%d:%d\n", ts.hours, ts.minutes);
}

int main() {
    time_slot ts;
    ts = set_ts(ts, 999);
    print_m(ts);
    print_hm(ts);
    return 0;
}
