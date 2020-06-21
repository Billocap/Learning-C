//Adds two distances.
#include <stdio.h>

struct Distance {
    int feet;
    float inch;
} d1, d2, result;


void main() {
    printf("Enter the two distances : \n");
    printf("Feet : ");
    scanf("%d", &d1.feet);
    printf("Inch : ");
    scanf("%f", &d1.inch);

    printf("Distance 2 : \n");
    printf("Feet : ");
    scanf("%d", &d2.feet);
    printf("Inch : ");
    scanf("%f", &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while (result.inch > 12.0) {
        result.inch -= 12.0;
        result.feet += 1;
    }
    
    printf("The sum is : %d' %.2f\"", result.feet, result.inch);
}