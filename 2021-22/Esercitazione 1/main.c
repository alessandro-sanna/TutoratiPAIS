#include <stdio.h>
#include "esercizio_1.h"
#include "esercizio_2.h"
#include "esercizio_3.h"
#include "esercizio_4.h"


int main() {
    char a[] = "ABC";
    char b[] = "DEF";
    printf("%s\n", join_string(a, 3, b, 3));
    //
    char str1[] = "XABZDY";
    char str2[] = "ZBA";
    int dim1 = 6, dim2 = 3;
    printf("max_palindrome = %s\n", find_palindrome(str1, dim1, str2, dim2));
    printf("max_alter = %s\n", find_alter(str1, str2));
    //
    int vettore[] = {2, 1, 3, 4, 7, 2, 6};
    int dim = 7;
    int target = 8;
    int *result;
    result = find_closer_pair(vettore, dim, target);
    printf("result = {%d, %d}\n", vettore[result[0]], vettore[result[1]]);
    //
    ptrList chain_list = create(10);
    chain_list = push_head(chain_list, 20);
    push_tail(chain_list, 40);
    print(chain_list);
    chain_list = pop(chain_list, 20);
    print(chain_list);
    return 0;
}
