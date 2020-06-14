//Checks if a number is zero or positive or negative.
#include <stdio.h>

void main() {
    double number;
    printf("Type a number to check : ");
    scanf("%lf", &number);
    if ( number > 0.0 ) {
        printf("The number %lf is positive", number);
    } else if ( number < 0.0 ) {
        printf("The number %lf is negative", number);
    } else {
        printf("You typed zero");
    }
}