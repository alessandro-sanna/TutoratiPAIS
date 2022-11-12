#include <stdio.h>
#include "sort.h"
#include "data_types/employee.h"
#include "data_types/chain_list.h"


int main (void) {
    p_list array = new_l();

    array = new_n(array, new_employee("Pritchett", 24));
    array = new_n(array, new_employee("Delgado", 36));
    array = new_n(array, new_employee("Tucker", 12));
    array = new_n(array, new_employee("Saltzman", 01));
    array = new_n(array, new_employee("Dunphy", 04));
    
    int size = 5;
    // show before
    printf("UNSORTED\n");
    print_l(array);
    // sort
    sort_employees(array, size, 'M', 's', '<');
    // show after
    printf("SORTED\n");
    print_l(array);
    return 0;
}
