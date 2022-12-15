#include "recursive.h"


int fibonacciR(int pos) {
    if (pos > 1) {
        return fibonacciR(pos - 1) + fibonacciR(pos - 2);
    } else {
        return pos;
    }
}

int factorialR(int num) {
    if (num > 1) {
        return num * factorialR(num - 1);
    } else {
        return 1;
    }
}

int binarySearchR(int array[], int target, int left, int right){
    int middle;
    if (left > right) {
        return -1;
    } else {
        middle = (left + right) / 2;
        if (array[middle] == target) {
            return middle;
        } else if (array[middle] < target) {
            return binarySearchR(array, target, middle + 1, right);  // in right half
        } else {
            return binarySearchR(array, target, left, middle - 1);  // in left half
        }
    }
}

double unknown2(double n1, double n2) {
    if (n2 > 0) {
        n1 *= unknown2(n1, --n2);
        return n1;
    } else {
        return 1;
    }
}