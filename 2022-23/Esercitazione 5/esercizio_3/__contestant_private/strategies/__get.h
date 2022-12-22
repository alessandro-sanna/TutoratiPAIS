//
// Created by Alessandro on 19/12/2022.
//

#ifndef UNTITLED3___GET_H
#define UNTITLED3___GET_H

#include "../../contestant.h"
typedef _Bool (*comparison) (pContestant, pContestant);
comparison getStrategy(char field);

#endif //UNTITLED3___GET_H
