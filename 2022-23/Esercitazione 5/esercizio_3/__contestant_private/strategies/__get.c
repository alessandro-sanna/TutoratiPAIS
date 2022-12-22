//
// Created by Alessandro on 19/12/2022.
//

#include "__get.h"
#include "forSurnames.h"
#include "forScores.h"


comparison getStrategy(char field) {
    switch(field) {
        case 's':
            return compareScores;
        case 'S':
            return compareSurnames;
        /*
        case 'N':
            return compareNames;
        */
        default:
            return (comparison) 0;
    }
};