#include "time_slot.h"
#include <stdlib.h>
#include <stdio.h>
/*
struct TimeSlot {
    int minutes;
};

p_time_slot create_ts(void) {
    p_time_slot new_p = (p_time_slot) malloc(sizeof(struct TimeSlot));
    return new_p;
}

void destroy_ts(p_time_slot pTs) {
    free(pTs);
}

int get_hours(p_time_slot ts){
    int hours = ts->minutes / 60;
    return hours;
}

int get_minutes(p_time_slot ts) {
    return ts->minutes;
};

int get_remainder(p_time_slot ts){
    int hours = get_hours(ts);
    int remainder = get_minutes(ts) - hours * 60;
    return remainder;
}


 
void set_ts(p_time_slot ts, int minutes) {
    ts->minutes = minutes;

};

void print_min(p_time_slot ts) {
    printf("%d\n", get_minutes(ts));
}

void print_hm(p_time_slot ts) {
    printf("%d:%d\n", get_hours(ts), get_remainder(ts));
}

*/

struct TimeSlot {
    int hours;
    int remainder;
    int minutes;
};

void set_ts(p_time_slot ts, int minutes) {
    ts->minutes = minutes;
    ts->hours = minutes / 60;
    ts->remainder = minutes - ts->hours *60;
};
p_time_slot create_ts(void) {
    p_time_slot new_p = (p_time_slot) malloc(sizeof(struct TimeSlot));
    return new_p;
}

void destroy_ts(p_time_slot pTs) {
    free(pTs);
}


int get_hours(p_time_slot ts){
    return ts->hours;
}

int get_minutes(p_time_slot ts) {
    return ts->minutes;
};

int get_remainder(p_time_slot ts){
    return ts->remainder;
}

void print_min(p_time_slot ts) {
    printf("%d\n", get_minutes(ts));
}

void print_hm(p_time_slot ts) {
    printf("%d:%d\n", get_hours(ts), get_remainder(ts));
}

void sum_ts(p_time_slot result, p_time_slot a, p_time_slot b){
    int new_minutes = get_minutes(a) + get_minutes(b);
    set_ts(result, new_minutes);
}