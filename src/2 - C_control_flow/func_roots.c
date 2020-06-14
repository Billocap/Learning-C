//Program that finds the real roots of a quadratic formula.
#include <math.h>
#include <stdio.h>

void main() {
    double a, b, c, delta, root1, root2;
    printf("Type the values for a, b and c : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b * b - 4 * a * c;

    if ( delta == 0.0 ) {
        printf("Both roots are %lf", -b / 2 * a);
    } else if ( delta > 0.0 ) {
        root1 = -b + sqrt( delta ) / 2 * a;
        root2 = -b - sqrt( delta ) / 2 * a;

        printf("The roots are %lf and %lf", root1, root2);
    } else {
        printf("The function has no real roots");
    }
}