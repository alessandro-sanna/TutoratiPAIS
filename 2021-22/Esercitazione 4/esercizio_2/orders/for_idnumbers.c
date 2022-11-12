//
// Created by liveuser on 12/6/21.
//

#include "for_idnumbers.h"

bool rising_idnumbers(p_employee emp_1, p_employee emp_2) {
    return get_id_number(emp_1) < get_id_number(emp_2);
};

bool decreasing_idnumbers(p_employee emp_1, p_employee emp_2) {
    return get_id_number(emp_1) > get_id_number(emp_2);
};
