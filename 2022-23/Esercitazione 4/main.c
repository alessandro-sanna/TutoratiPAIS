#include <stdio.h>
#include <time.h>
#include "procedural.h"
#include "recursive.h"


int main() {
    // es1
    long tic, toc;
    int sequenceLength = 16;
    printf("Procedural:\t[");
    for (int i = 0; i < sequenceLength; i++){
        printf("%d, ", fibonacciP(i));
    }
    printf("\b\b]\n");
    printf("Recursive:\t[");
    for (int i = 0; i < sequenceLength; i++){
        printf("%d, ", fibonacciR(i));
    }
    printf("\b\b]\n");

    //es2
    printf("\nP:%d, R:%d\n",
           factorialP(5),
           factorialR(5));

    //es3
    printf("\nunk:%.2f\n", unknown2(4, 4));

    //es4-5
    int array[] = {0,10,20,30,40,50,60,70,80,90};
    printf("\nP:%d, R:%d\n",
           binarySearchP(array, 10, 50),
           binarySearchR(array, 50, 0, 9));
    
    return 0;
}
