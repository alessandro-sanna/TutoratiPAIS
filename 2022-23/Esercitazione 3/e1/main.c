#include <stdio.h>
#include "list.h"

int main() {
    p_list my_l = new_list();
    my_l = new_plant(my_l, "Aloe", "Vera", 1);
    my_l = new_plant(my_l, "Rosa", "Canina", 1);
    my_l = new_plant(my_l, "Rosa", "Gallica", 1);
    my_l = new_plant(my_l, "Cycas", "Revoluta", 0);
    int res = massimo(my_l,1);
    printf("\nres = %d", res);
}
