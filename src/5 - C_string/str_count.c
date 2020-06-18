//Displays some information about the string.
#include <stdio.h>

int isAlpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
} 

int isDigit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    char string[100], c;
    int space, digit, vowel, consonant;
    space = digit = vowel = consonant = 0;

    printf("Type the string you want to test : ");
    fgets(string, sizeof(string), stdin);

    for( int i=0; string[i] != '\0'; i++ ) {
        c = string[i];
        if ( c == ' ' ) {
            space += 1;
        } else if ( isDigit(c) ) {
            digit += 1;
        } else if ( isAlpha(c) ){
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
                    vowel += 1;
            } else {
                consonant += 1;
            }
            
        }
    }

    printf("There are %d vowels.\n", vowel);
    printf("There are %d consonants.\n", consonant);
    printf("There are %d digits.\n", digit);
    printf("There are %d spaces.\n", space);
}