//Counts the size of an integer.
#include <stdio.h>

void main() {
    int n, pn, size = 0;
    
    printf("Print an integer : ");
    scanf("%d", &n);

    pn = n;
    while ( n != 0 ) {
        n /= 10;
        size ++;
    }

    printf("The size of %d is %d", pn, size);
}