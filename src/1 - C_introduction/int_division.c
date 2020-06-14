//Prints de result of an integer division of two ints typed by the user.
#include <stdio.h>

void main() {
    int a, b;
    printf("Type two intergers : ");
    scanf("%d %d", &a, &b);
    printf("The quotient is %d \n", a / b);
    printf("The remainder is %d", a % b);
}