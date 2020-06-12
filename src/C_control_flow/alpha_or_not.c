//Checks if the typed character is a letter.
#include <stdio.h>

void main() {
    char c;
    printf("Type a char : ");
    scanf("%c", &c);
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
        printf("'%c' is a letter", c);
    } else {
        printf("'%c' is not a letter", c);
    }
}