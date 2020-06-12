//Program that inverts the order of the digits in a integer.
#include <stdio.h>

void main() {
    int n, currnum = 0, reverse = 0;
    printf("Type an integer : ");
    scanf("%d", &n);
    while( n != 0 ) {
        currnum = n % 10;
        reverse = reverse * 10 + currnum;
        n /= 10;
    }

    printf("The reversed number is %d", reverse);
}