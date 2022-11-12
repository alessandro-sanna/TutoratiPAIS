//
// Created by liveuser on 12/6/21.
//

#include "employee.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Employee {
    char surname[EMP_NAME];
    int id_number;
};

p_employee new_employee (char *surname, int id_number) {
    p_employee new_e = (p_employee) malloc(sizeof(struct Employee));
    strncpy(new_e->surname, surname, EMP_NAME);
    new_e->id_number = id_number;
    return new_e;
};

char *get_surname (p_employee emp) {
    return emp->surname;
}

int get_id_number (p_employee emp) {
    return emp->id_number;
}

void set_employee(p_employee emp, char *surname, int id_number) {
    strncpy(emp->surname, surname, EMP_NAME);
    emp->id_number = id_number;
}

void print_employee(p_employee emp) {
    printf("{ %s; id=%d }\n", emp->surname, emp->id_number);
}