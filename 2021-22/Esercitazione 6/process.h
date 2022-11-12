//
// Created by sanna on 17/12/2021.
//

#ifndef ESERCITAZIONE_6_PROCESS_H
#define ESERCITAZIONE_6_PROCESS_H

typedef struct Process *p_process;
p_process new_process(char *name, int priority);
int get_priority(p_process process);
void set_priority(p_process process, int amount);
char *get_name(p_process process);
void printf_p(p_process process);
#endif //ESERCITAZIONE_6_PROCESS_H
