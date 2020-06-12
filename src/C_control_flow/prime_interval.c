//Print all the prime number between two given integers.
#include <stdio.h>

void main() {
    int a, b, i, j;
    printf("Type to integers : ");
    scanf("%d %d", &a, &b);

    printf("The prime numbers between %d and %d : ", a, b);
    for ( i=a; i<=b; i++ ) {
        if ( i == 1 ) {
            printf("%d ", i);
        } else if ( i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
            if( i == 2 || i == 3 || i==5 ) {
                printf("%d ", i);
            }
        } else {
            for ( j=7; j<=i; j++ ) {
                if( i != j && i % j == 0 ) {
                    break;
                } else if ( i % j == 0 ) {
                    printf("%d ", i);
                }
            }
        }
    }
}