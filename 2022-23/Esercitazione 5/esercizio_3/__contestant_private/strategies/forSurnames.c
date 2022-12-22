//
// Created by Alessandro on 19/12/2022.
//

#include "forSurnames.h"
#include <string.h>

_Bool compareSurnames(pContestant a, pContestant b) {
    return strcmp(getSurname(a), getSurname(b)) > 0;
};