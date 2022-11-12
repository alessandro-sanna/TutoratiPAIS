//
// Created by alessandro on 12/5/20.
//

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "chain_list.h"


struct list {
    p_employee data;
    p_list next;
    bool just_created;
};

p_list new_l (void) {
    p_list new = (p_list) malloc(sizeof(struct list));
    new->next = NULL;
    new->just_created = true;
    return new;
}


p_list new_n(p_list my_l, p_employee value) {
    p_list current = my_l;

    if (my_l->just_created) {
        my_l->data = value;
        my_l->just_created = false;
        return my_l;
    }

    p_list new = (p_list) malloc(sizeof(struct list));
    new->data = value;
    new->next = my_l;
    new->just_created = false;

    return new;
}

p_employee get_data(p_list my_l) {
    return my_l->data;
}

p_list get_next(p_list my_l) {
    return my_l->next;
}

void set_data(p_list my_l, p_employee value) {
    my_l->data = value;
}

void set_next(p_list my_l, p_list value) {
    my_l->next = value;
}

void print_l(p_list my_l) {
    p_list aux = my_l;
    p_employee this;
    printf("{ \n");
    while (aux != NULL) {
        this = get_data(aux);
        printf("\t[ %s, id=%d ]\n", get_surname(this), get_id_number(this));
        aux = aux->next;
    }
    printf("}\n");
}