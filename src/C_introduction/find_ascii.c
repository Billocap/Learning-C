//Prints the ASCII code of the char typed by the user.
#include <stdio.h>

void main() {
    char c;
    printf("Type a char : ");
    scanf("%c", &c);
    printf("The ASCII code of %c is %d", c, c);
}