//Calculates the difference between two timw periods.
#include <stdio.h>

struct Time {
    int seconds;
    int minutes;
    int hours;
};

void timeDiff(struct Time start, struct Time stop, struct Time *result) {
    while ( stop.seconds < start.seconds ) {
        stop.minutes -= 1;
        stop.seconds += 60;
    }

    while ( stop.minutes < stop.hours ) {
        stop.hours -= 1;
        stop.minutes += 60;
    }

    (*result).hours = stop.hours - start.hours;
    (*result).minutes = stop.minutes - start.minutes;
    (*result).seconds = stop.seconds - start.seconds;
};


void main() {
    struct Time start, stop, result;
    printf("Enter the first time : [hours] [minutes] [seconds] \n");
    scanf("%d %d %d", &stop.hours, &stop.minutes, &stop.seconds);

    printf("Now the second time : [hours] [minutes] [seconds] \n");
    scanf("%d %d %d", &start.hours, &start.minutes, &start.seconds);

    timeDiff(start, stop, &result);

    printf("%d:%d:%d - %d:%d:%d = %d:%d:%d", 
        stop.hours, stop.minutes,stop.seconds,
        start.hours, start.minutes, start.seconds,
        result.hours, result.minutes, result.seconds
        );
}