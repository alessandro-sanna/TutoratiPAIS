#ifndef LIST_H
#define LIST_H

typedef struct list *p_list;
p_list new_list(void);
p_list new_employee(p_list my_l);
int confronta (p_list my_l, int field);

#endif