//
// Created by liveuser on 12/6/21.
//

#include "for_surnames.h"
#include <string.h>

bool rising_surnames(p_employee emp_1, p_employee emp_2) {
    return strncmp(get_surname(emp_1), get_surname(emp_2), EMP_NAME) < 0;
};

bool decreasing_surnames(p_employee emp_1, p_employee emp_2) {
    return strncmp(get_surname(emp_1), get_surname(emp_2), EMP_NAME) > 0;
};
