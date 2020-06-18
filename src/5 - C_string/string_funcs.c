//String example.
#include <stdio.h>

int isAlpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
} 

void main() {
    char string1[100], string2[100], result[100], clear1[100], clear2[100];
    int op, length1 = 0, length2 = 0, i, j;

    printf("Type the string : ");
    fgets(string1, sizeof(string1), stdin);

    printf("Type the second string : ");
    fgets(string2, sizeof(string2), stdin);

    while (string1[length1]!='\n') {
        length1 ++;
    }

    while (string2[length2]!='\0') {
        length2 ++;
    }

    printf("The length of the first string is %d\n", length1 - 1);
    printf("The length of the second string is %d\n", length2 - 1);

    for ( i=0; i<length1; ++i ) {
        result[i] = string1[i];
    }

    for ( i=length1; string2[i - length1]!='\0'; ++i ) {
        result[i] = string2[i - length1];
    }

    printf("Concatenated : \n");
    printf("%s", result);

    for ( i=0, j=0; string1[i]!='\0'; ++i ) {
        if (isAlpha(string1[i]) || string1[i] == '\0') {
            clear1[j] = string1[i];
            j++;
        }
    }
    
    for ( i=0, j=0; string2[i]!='\0'; ++i ) {
        if (isAlpha(string2[i]) || string2[i] == '\0') {
            clear2[j] = string2[i];
            j++;
        }
    }
    
    printf("Cleaned strings : \n");
    printf("%s\n", clear1);
    printf("%s\n", clear2);
}