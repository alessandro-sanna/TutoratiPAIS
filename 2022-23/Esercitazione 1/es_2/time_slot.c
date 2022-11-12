#include "time_slot.h"
#include <stdio.h>

time_slot set_ts(time_slot ts, int hours, int minutes){
    ts.hours = hours;
    ts.minutes = minutes;
    return ts;
}

void print_m(time_slot ts){
    int min_total = ts.hours * 60 + ts.minutes;
    printf("%d\n", min_total);
}

void print_hm(time_slot ts){
    printf("%d:%d\n", ts.hours, ts.minutes);
}