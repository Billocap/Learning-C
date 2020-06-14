//Checks if a given interger is an armstrong number of oreder 3.
#include <stdio.h>

void main() {
    int n, revsum = 0, invnum, currnum;

    printf("Type an integer : ");
    scanf("%d", &n);
    invnum = n;

    while ( invnum != 0 ) {
        currnum = invnum % 10;
        revsum += currnum * currnum * currnum;
        invnum /= 10;
    }

    if ( n == revsum ) {
        printf("%d is an Armstrong number", n);
    } else {
        printf("%d is not an Armstrong number", n);
    }
}