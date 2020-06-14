//Simple exemple of how the "long" keyword works.

#include <stdio.h>

void main() {
    int a;
    long b;
    long long c;
    double d;
    long double e;

    printf("The size of an int is %zu \n", sizeof(a));
    printf("The size of a long is %zu \n", sizeof(b));
    printf("The size of a long long int is %zu \n", sizeof(c));
    printf("The size of a double is %zu \n", sizeof(d));
    printf("The size of a long double is %zu", sizeof(e));
}