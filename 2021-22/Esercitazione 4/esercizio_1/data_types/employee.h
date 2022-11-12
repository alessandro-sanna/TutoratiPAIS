//
// Created by liveuser on 12/6/21.
//

#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H
#define EMP_NAME 50

typedef struct Employee *p_employee;
p_employee new_employee (char *surname, int id_number);
char *get_surname (p_employee emp);
int get_id_number (p_employee emp);
void set_employee(p_employee emp, char *surname, int id_number);
void print_employee(p_employee emp);

#endif //UNTITLED_EMPLOYEE_H
