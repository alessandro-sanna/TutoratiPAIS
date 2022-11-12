#include "stack.h"

int main() {
    p_stack nst = new_stack();
    push(nst, 3);
    push(nst, 4);
    push(nst, 1);
    push(nst, 9);
    print_stack(nst);
    pop(nst);
    pop(nst);
    print_stack(nst);
    push(nst, 2);
    pop(nst);
    pop(nst);
    pop(nst);
    print_stack(nst);
    pop(nst); // verifico il controllo di errore: questo pop è a stack già vuoto
    print_stack(nst);
    return 0;
    /* risultati:
     * CHAINLIST
     * Stack at 0x215c6b0 is { 9  1  4  3 }
     * Stack at 0x215c6b0 is { 4  3 }
     * Stack at 0x215c6b0 is {}
     * Stack at 0x215c6b0 is {}
     *
     * ARRAY
     * Stack at 0x5646b0 is { 9  1  4  3 }
     * Stack at 0x5646b0 is { 4  3 }
     * Stack at 0x5646b0 is {}
     * Stack at 0x5646b0 is {}
     */
}