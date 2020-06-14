//Checks if a number is a prime.
#include <stdio.h>

void main() {
    int n=0, i;
    printf("Type an interger : ");
    scanf("%d", &n);
    if ( n == 1 ) {
        printf("%d is a prime", n);
    } else if ( n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
        if( n == 2 || n == 3 || n==5 ) {
            printf("%d is a prime", n);
        } else {
            printf("%d is not a prime", n);
        }
    } else {
        for ( i=7; i<=n; i++ ) {
            if( i != n && n % i == 0 ) {
                printf("%d is not a prime", n);
                break;
            } else if ( n % i == 0 ) {
                printf("%d is a prime", n);
            }
        }
    }
}