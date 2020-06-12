//Calculates de power of number given an exponent.
#include <stdio.h>

void main() {
    int n, e, pex, num = 1;
    printf("Type the number an the exponent : ");
    scanf("%d %d", &n, &e);
    pex = e;
    while( e != 0 ) {
        num *= n;
        e -= 1;
    }
    printf("%d ^ %d = %d", n, pex, num);
}