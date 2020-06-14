//Program that displays all the factors of a number.
#include <stdio.h>

void main() {
    int n, i;
    printf("Type an integer : ");
    scanf("%d", &n);
    printf("The factors of %d are : ", n);
    for( i=1; i<=n; i++ ) {
        if ( n % i == 0 ) {
            printf("%d ", i);
        }
    }
}