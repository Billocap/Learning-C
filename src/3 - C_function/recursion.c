//Some examples using recursion.
#include <stdio.h>

int sigma(int n) {
    if ( n > 0 ) {
        return n + sigma(n - 1);
    } else {
        return 0;
    }
}

int factorial(int n) {
    if ( n > 1 ) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int power(int n, int e) {
    if ( e > 0 ) {
        return n * power(n, e -1);
    } else {
        return 1;
    }
}

void main() {
    int n;
    char op;
    printf("usage : [number] [operation] : \n");
    printf("operation : s for sum, f for factorial and p for power \n");
    scanf("%d %c", &n, &op);

    switch (op)
    {
    case 's':
        printf("The sum is %d", sigma(n));
        break;
    
    case 'f':
        printf("%d factorial is %d", n, factorial(n));
        break;
    
    case 'p':
        printf("%d to the second power is %d", n, power(n, 2));
        break;
    
    default:
        printf("Invalid operation");
        break;
    }
}