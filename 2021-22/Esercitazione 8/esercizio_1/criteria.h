//
// Created by sanna on 23/12/2021.
//

#ifndef E8_CRITERIA_H
#define E8_CRITERIA_H

typedef _Bool (*criterion) (float, float);
criterion get_criterion(char target);

#endif //E8_CRITERIA_H
