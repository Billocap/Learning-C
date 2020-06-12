//Calculates the factorial of a number.
#include <stdio.h>

void main() {
    int n, fac=1, i;
    
    printf("Type an integer : ");
    scanf("%d", &n);
    if ( n >= 0 ) {
        for ( i=1; i<=n; ++i ) {
            fac *= i;
        }

        printf("The factorial of %d is %d", n, fac);
    } else {
        printf("Invalid number");
    }
}