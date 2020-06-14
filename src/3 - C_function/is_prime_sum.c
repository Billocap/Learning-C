//Checks if number can be expressed as the sum of two prime numbers.
#include <stdio.h>

int isPrime(int n);

void main() {
    int n, x, y;
    printf("Type an integer : ");
    scanf("%d", &n);

    for ( y=0; y<=n; y++ ) {
        if (isPrime(y)) {
            for ( x=0; x<=n; x++ ) {
                if(isPrime(x) && y + x == n) {
                    printf("%d + %d = %d\n", y, x, n);
                }
            }
        }
    }
}

int isPrime(int n) {
    int div = n - 1;
    
    while (div > 1) {
        if ( n % div == 0 ) {
            return 0;
        }

        div -= 1;
    }
    
    return 1;
}