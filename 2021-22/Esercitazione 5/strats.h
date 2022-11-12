//
// Created by alessandro on 16/12/21.
//

#ifndef ESERCITAZIONE_5_STRATS_H
#define ESERCITAZIONE_5_STRATS_H

typedef _Bool (*sort_strat) (int, int);
sort_strat get_strat(char choice);

#endif //ESERCITAZIONE_5_STRATS_H
