//Sums two complex numbers.
#include <stdio.h>

typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex z1, complex z2) {
    complex res;
    res.real = z1.real + z2.real;
    res.imag = z1.imag + z2.imag;
    return res;
}

void main() {
    complex n1, n2, result;
    printf("First number : \n");
    printf("Real Part : \n");
    scanf("%f", &n1.real);
    printf("Imaginary Part : \n");
    scanf("%f", &n1.imag);

    printf("Second number : \n");
    printf("Real Part : \n");
    scanf("%f", &n2.real);
    printf("Imaginary Part : \n");
    scanf("%f", &n2.imag);

    result = add(n1, n2);

    printf("The sum is %.2f + %.2fi", result.real, result.imag);
}