//Program that checks if an character is a vowel or a consonant.
#include <stdio.h>

void main() {
    char test;
    
    printf("Type a char : ");
    scanf("%c", &test);

    int upper = (
        test == 'A' ||
        test == 'E' ||
        test == 'I' ||
        test == 'O' ||
        test == 'U'
    );

    int lower = (
        test == 'a' ||
        test == 'e' ||
        test == 'i' ||
        test == 'o' ||
        test == 'u'
    );

    if ( lower || upper ) {
        printf("%c is a vowel", test);
    } else {
        printf("%c is a consonant", test);
    }
}