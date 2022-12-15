#ifndef LIST_H
#define LIST_H

typedef struct list *p_list;
p_list new_list(void);
p_list new_plant(p_list my_l, char *genere, char *specie, _Bool fiore);
int massimo (p_list my_l, int field);

#endif