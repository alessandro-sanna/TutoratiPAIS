#include <stdio.h>
#include "sort.h"
#include "data_types/employee.h"


int main (void) {
    p_employee array[] = {
            new_employee("Pritchett", 24),
            new_employee("Delgado", 36),
            new_employee("Tucker", 12),
            new_employee("Saltzman", 01),
            new_employee("Dunphy", 04)
    };
    int size = 5;
    // show before
    printf("UNSORTED\n");
    for (int i = 0; i < size; i++) print_employee(array[i]);
    // sort
    sort_employees(array, size, 'M', 's', '>');
    // show after
    printf("SORTED\n");
    for (int i = 0; i < size; i++) print_employee(array[i]);
    return 0;
}
