//Program that checks if a year is a leap year.
#include <stdio.h>

void main() {
    int year;
    printf("Type the year you wanna check : ");
    scanf("%d", &year);

    if ( year % 400 == 0 ) {
        printf("The year %d is a leap year", year);
    } else if ( year % 100 == 0 ) {
        printf("The year %d is not a leap year", year);
    } else if ( year % 4 == 0 ) {
        printf("The year %d is a leap year", year);
    } else {
        printf("The year %d is not a leap year", year);
    }
}