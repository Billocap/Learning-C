//Shows the multiplication table of a number.
#include <stdio.h>

void main() {
    int n, i;
    printf("Type a integer : ");
    scanf("%d", &n);
    for ( i=0; i<=10; ++i ) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}