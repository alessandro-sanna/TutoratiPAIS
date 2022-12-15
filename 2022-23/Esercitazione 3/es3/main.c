#include <stdio.h>

int unknown (int iN) {
    int iK = 1;
    int iT = 1;
    while (iK++ < iN) {
        iT *= iK;
    }
    return iT;
}

double unknown2(double n1, double n2, int *iter) {

    if (n2 > 0) {
        *iter += 3;
        n1 *= unknown2(n1, --n2, iter);
        return n1;
    } else {
        *iter += 1;
        return 1;
    }
}

int main(){
    int iter;
    for (int n2 = 0; n2 < 100; n2++) {
        iter = 0;
        unknown2(10, n2, &iter);
        printf("\n%d", iter);
    }

}