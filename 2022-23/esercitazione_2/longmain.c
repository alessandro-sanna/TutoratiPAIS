#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

// Implementing Dynamic Stack (NOT FIRST CLASS) using structs and pointers in C
// YOU CAN bypass the interface and break encapsulation:
// s-> ...
// *s  ...

void automaticTest(void);
void use(void);
// MAIN
int main (){
    int choice;

    printf("DYNAMIC QUEUE");
    printf("\nChoose any of the following options:\n");
    printf("   1: Automatic test            2: use \n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: automaticTest(); break;
        case 2: use(); break;
        default: printf("bye\n");
    }

    printf("bye!");
    return 0;
} // end main

void use(void){
    int choice=0;
    int value;
    pQueue queue;
    queue = createQueue();

    do {
        printf("\n------------------------------------\n");
        printf("Choose any of the following options:\n");
        printf(" 0: Exit            1: Push            2: Pop\n");
        printf(" 4: Check if the stack is empty    5: Delete stack\n");
        printf(" 6: Check if the stack is full     9: Show contents\n");
        scanf("%d", &choice);
        switch(choice) {
            case 0: break;
            case 1: {
                printf("Insert a value\n"); scanf("%d", &value);
                put(queue,value); show(queue);
                break;
            }
            case 2: {
                printf("get->%d\n",get(queue));
                show(queue);
                break;
            }
            case 4:
                printf("%s\n", isEmpty(queue) ? "stack EMPTY": "stack NOT EMPTY");
                break;
            case 5: destroyQueue(queue); queue = createQueue();break;
            case 6: printf("Not applicable\n"); break;
            case 9: show(queue); break;
            default: printf("Please choose a correct option!");
        }
    }while (choice!=0);

    // Don't forget to free the memory!
    destroyQueue(queue);
}


void automaticTest(void){
    int value;
    pQueue s;
    s= createQueue();
    printf("Automatic test\n");




    printf("Push 1 2 3 4 5 6 \n");
    printf("->expected: \n[TOP] [1 2 3 4 5 6] [BASE]");
    for (int i=1; i<7; i++) put(s,i);
    printf("\n->obtained:\n");
    show(s);
    printf("--------------------\n");

    printf("pop; pop; peek \n");
    printf("->expected: out: 1; out: 2; (Resolution order in printf) \n[TOP] [3 4 5 6] [BASE]");
    printf("\n->obtained:\n");
    int a = get(s);
    int b = get(s);
    printf(" out:%d,out: %d\n ",a, b);
    show(s);

    printf("--------------------\n");
    printf("Push 7 8 \n");
    printf("->expected: \n[TOP] [3 4 5 6 7 8] [BASE]");
    put(s,7);     put(s,8);
    printf("\n->obtained:\n");
    show(s);

    printf("--------------------\n");
    // Don't forget to free the memory!
    destroyQueue(s);
}