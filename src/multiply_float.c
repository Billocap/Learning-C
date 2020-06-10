//Multiply two floats typed by the user.

#include <stdio.h>

void main() {
    float a, b;
    printf("Type two floats : ");
    scanf("%f %f", &a, &b);
    printf("%f * %f = %f", a, b, a * b);
}