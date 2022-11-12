#ifndef ESERCITAZIONE_1_TIME_SLOT_H
#define ESERCITAZIONE_1_TIME_SLOT_H

typedef struct {
    int hours;
    int minutes;
} time_slot;

time_slot set_ts(time_slot ts, int hours, int minutes);
void print_m(time_slot ts);
void print_hm(time_slot ts);

#endif //ESERCITAZIONE_1_TIME_SLOT_H
