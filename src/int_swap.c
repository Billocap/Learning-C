//Swap the numbers typed by the user.

#include <stdio.h>

void main() {
    int a, b;
    printf("Type two ints : ");
    scanf("%d %d", &a, &b);
    printf("%d %d", b, a);
}