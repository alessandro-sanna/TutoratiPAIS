#include "procedural.h"


int fibonacciP(int pos) {
    int t1, t2 = 1, fib = 0;
    for(int i = 0; i < pos; i++) {
        t1 = t2;
        t2 = fib;
        fib = t1 + t2;
    }
    return fib;
}

int factorialP(int num) {
    int result = 1;
    for(int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int binarySearchP(const int *array, int size, int target) {
    // sort(array, size);
    int left = 0, right = size - 1, middle;
    do {
        middle = (left + right) / 2;
        if (array[middle] == target) {
            return middle;
        } else if (array[middle] < target) {
            left = middle + 1;  // in right half
        } else {
            right = middle - 1;  // in left half
        }
    } while (left < right);
    return -1;  // not found
}