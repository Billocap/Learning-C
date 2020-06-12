//Sums all numbers before the typed number.
#include <stdio.h>

void main() {
    int n, sum = 0, i;
    printf("Type an integer : ");
    scanf("%d", &n);
    if ( n >= 0 ) {

        for( i=0; i<=n; ++i ) {
            sum += i;
        }
        
        printf("The sum is %d", sum);
    } else {
        printf("Invalid number the integer must be positive");
    }
}