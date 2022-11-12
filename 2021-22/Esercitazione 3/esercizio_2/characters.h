#ifndef CHAR_H
#define CHAR_H

typedef struct character *p_character;
p_character create_character(void);
void fight(p_character p_c);
void defend(p_character p_c);
void update_score(p_character p_c, int modifier);
void check_game(p_character p_c);
int get_score(p_character p_c);

#endif