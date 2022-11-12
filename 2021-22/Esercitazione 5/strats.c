//
// Created by alessandro on 16/12/21.
//

#include "strats.h"

_Bool rising(int a, int b) { return a < b; };
_Bool decreasing(int a, int b) { return a > b; }

sort_strat get_strat(char choice) {
    return (choice == '<') ? rising : decreasing;
}