//Finds the GCD between two integers.
#include <stdio.h>

void main() {
    int a, b, i, gcd;
    
    printf("Type two integers : ");
    scanf("%d %d", &a, &b);

    for ( i=1; i<=b && i<=a; ++i ) {
        if ( a % i == 0 && b % i == 0 ) {
            gcd = i;
        }
    }

    printf("The GCD is %d", gcd);
}