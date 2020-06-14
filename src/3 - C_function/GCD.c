//Finds the GCD of two integers.
#include <stdio.h>

int GCD(int n1, int n2) {
    if (n2 != 0) {
        return GCD(n2, n1 % n2);
    } else {
        return n1;
    }
}

void main() {
    int n1, n2;
    printf("Type two integers : ");
    scanf("%d %d", &n1, &n2);
    printf("The GCD between %d and %d are %d", n1, n2, GCD(n1, n2));
}