//Program that tells the largest number beetween three numbers.
#include <stdio.h>

void main() {
    double a, b, c, large;
    
    printf("Type three floats : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if ( a > b ) {
        if ( a > c ) {
            large = a;
        } else {
            large = c;
        }
    } else {
        if ( b > c ) {
            large = b;
        } else {
            large = c;
        }
    }

    printf("The largest number between %lf, %lf and %lf is %lf", a, b, c, large);
}