//
// Created by alessandro on 11/18/21.
//

#include <stdio.h>
#include "fizzbuzz.h"
#include "method_strategies/method_selector.h"
#include "operation_selector/operation_selector.h"

void fizzbuzz(int array[], int size, int x, int y, int method, char operator) {
    method_strategy my_method = method_selector(method);
    operation_strategy my_operation = operation_selector(operator);
    int z = my_operation(x, y);

    for (int i = 0; i < size; i++) {
        if (my_method(array[i], z)) {
            printf("FizzBuzz, ");
        }
        else if (my_method(array[i], y)) {
            printf("Buzz, ");
        }
        else if (my_method(array[i], x)) {
            printf("Fizz, ");
        }
        else {
            printf("%d, ", array[i]);
        }
    }
    printf("\n");
}