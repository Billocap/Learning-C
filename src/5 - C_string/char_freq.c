//Shows the frequence of an character in the string;
#include <stdio.h>

void main() {
    char string[100], c, count = 0;

    printf("Type the string : ");
    fgets(string, sizeof(string), stdin);

    printf("Type the caracter to count : ");
    scanf("%c", &c);

    for (int i=0; i<sizeof(string); i++) {
        if (string[i] == c) {
            count += 1;
        }
    }

    printf("'%c' appears %d times in : %s", c, count, string);
}