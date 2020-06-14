//Prints the prime numbers between two given numbers.
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int sum = 0, part, num = n;

    while (num != 0) {
        part = num % 10;
        sum += part * part * part;
        num /= 10;
    }

    if ( sum == n ) {
        return 1;
    } else {
        return 0;
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

void main() {
    int a, b, i;
    printf("Type two integers : ");
    scanf("%d %d", &a, &b);

    printf("The prime numbers between %d and %d are : ", a, b);
    for(i=a; i<=b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("%c", '\n');
    
    printf("The Armstrong numbers of order 3 between %d and %d are : ", a, b);
    for(i=a; i<=b; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
}