//Prints all the armstrong numbers of order 3 between two given integers.
#include <stdio.h>

void main() {
    int a, b, i, revsum = 0, currnum, invnum;
    printf("Type two integers : ");
    scanf("%d %d", &a, &b);
    printf("The Amrstrong numbers between %d and %d are : ", a, b);
    for ( i=a; i<=b; i++ ) {
        invnum = i;

        while ( invnum != 0 ) {
            currnum = invnum % 10;
            revsum += currnum * currnum * currnum;
            invnum /= 10;
        }

        if ( i == revsum ) {
            printf("%d ", i);
        }

        revsum = 0;
    }
}