//Prints the Fibonacci sequence up to the typed interger.
#include <stdio.h>

void main() {
    int n, i, num = 0, a = 0, b = 1;
    
    printf("Type an integer : ");
    scanf("%d", &n);

    printf("%d ", a);
    printf("%d ", b);

    while( num <= n ) {
        num = a + b;
        a = b;
        b = num;
        
        if( num <= n )
            printf("%d ", num);
    }
}