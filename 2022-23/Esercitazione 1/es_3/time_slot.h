//
// Created by alessandro on 11/3/22.
//

#ifndef ESERCITAZIONE_1_3_TIME_SLOT_H
#define ESERCITAZIONE_1_3_TIME_SLOT_H

typedef struct TimeSlot *p_time_slot;

p_time_slot create_ts(void);
void destroy_ts(p_time_slot ts);
void print_min(p_time_slot ts);
void print_hm(p_time_slot ts);
int get_hours(p_time_slot ts);
int get_minutes(p_time_slot ts);
void set_ts(p_time_slot ts, int minutes);

void sum_ts(p_time_slot result, p_time_slot a, p_time_slot b);
#endif