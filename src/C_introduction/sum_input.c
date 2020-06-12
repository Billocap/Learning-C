//Returns the sum of the integers typed by user.
#include <stdio.h>

void main() {
    int a, b;
    printf("Type two integers : ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, a + b);
}