//Checks if a given number is a palindrome.
#include <stdio.h>

void main() {
    int n, rnum = 0, rev = 0;
    printf("Type an integer : ");
    scanf("%d", &n);
    rnum = n;
    while ( rnum != 0 ) {
        rev = ( 10 * rev ) + ( rnum % 10 );
        rnum /= 10;
    }
    if( n - rev == 0 ) {
        printf("The number is a palindrome");
    } else {
        printf("The number is not a palindrome");
    }
}