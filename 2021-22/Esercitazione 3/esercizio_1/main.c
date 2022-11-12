//
// Created by alessandro on 11/18/21.
//
#include "fizzbuzz.h"
#define SIZE 30

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++) array[i] = i + 1;
    fizzbuzz(array, SIZE, 3, 5, 1, '+');
    return 0;
}