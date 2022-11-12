#include <stdio.h>
#include "queue.h"


int main() {
    p_process array[] = {
            new_process("cat", 10),
            new_process("bash", 2),
            new_process("man", 19),
            new_process("grep", 3)
    };
    p_process popped;
    p_queue queue = new_queue(array, 4);
    printf_q(queue);
    insert(new_process("xyz", 1), queue);
    printf_q(queue);
    printf("\n"); printf_p(get_max(queue));
    popped = pop_max(queue);
    printf("\n"); printf_p(popped);
    increase_key(2, 18, queue);
    printf_q(queue);
    decrease_key(0, 22, queue);
    printf_q(queue);
}
