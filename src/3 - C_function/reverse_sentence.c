//Reverse a sentence entered by the user.
#include <stdio.h>

char reverse() {
    char c;
    scanf("%c", &c);

    if(c != '\n') {
        reverse();
        printf("%c", c);
    }
}

void main() {
    printf("Type an sentence : ");
    reverse();
}