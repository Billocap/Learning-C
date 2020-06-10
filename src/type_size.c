//Simple desmonstration of the size in bytes of each data type.

#include <stdio.h>

void main() {
    int a;
    float b;
    double c;
    char d;

    printf("The size of an int is %zu \n", sizeof(a));
    printf("The size of a float is %zu \n", sizeof(b));
    printf("The size of a double is %zu \n", sizeof(c));
    printf("The size of a char is %zu", sizeof(d));
}