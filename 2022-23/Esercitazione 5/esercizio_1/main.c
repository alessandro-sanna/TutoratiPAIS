#include <stdio.h>
#include "sort.h"


void printBook(char **addressBook, int size) {
    printf("AddressBook:\n-------------\n");
    for (int i = 0; i < size; i++) printf("%s\n", addressBook[i]);
    printf("\n");
}

int main() {
    char *addressBook[] = {"Blue", "Lance", "Lorelei", "Agatha", "Bruno"};
    int size = 5;
    printBook(addressBook, size);
    selectionSort(addressBook, size);
    printBook(addressBook, size);
    return 0;
}
