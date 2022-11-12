//
// Created by alessandro on 12/5/20.
//

#ifndef ESERCITAZIONE_4_CHAIN_LIST_H
#define ESERCITAZIONE_4_CHAIN_LIST_H

typedef struct list *p_list;
#include "employee.h"


p_list new_l(void);
p_list new_n(p_list my_l, p_employee value);

p_employee get_data(p_list my_l);
p_list get_next(p_list my_l);

void set_data(p_list my_l, p_employee value);
void set_next(p_list my_l, p_list value);

void print_l(p_list my_l);

#endif //ESERCITAZIONE_4_CHAIN_LIST_H
