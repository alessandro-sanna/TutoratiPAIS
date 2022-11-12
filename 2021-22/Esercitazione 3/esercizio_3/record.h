#ifndef RECORD_H
#define RECORD_H

typedef struct record *p_record;
p_record new_record(void);

char *get_nome(p_record my_r);
char *get_cognome(p_record my_r);
char *get_dipartimento(p_record my_r);
float get_stipendio(p_record my_r);

#endif