#ifndef RECORD_H
#define RECORD_H

typedef struct record *p_record;
p_record new_record(char *genere, char *specie, _Bool fiore);

char *get_genere(p_record my_r);
char *get_specie(p_record my_r);
_Bool get_fiore(p_record my_r);

#endif