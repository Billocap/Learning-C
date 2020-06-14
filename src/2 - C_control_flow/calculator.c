//Prints the result of a simple expression.
#include <stdio.h>

void main() {
    double a, b;
    char op;
    printf("usage : [number] [operation] [number] : \n");
    printf("operation : +, -, * or / \n");
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%lf %c %lf = %lf", a, op, b, a + b);
        break;
    
    case '-':
        printf("%lf %c %lf = %lf", a, op, b, a - b);
        break;
    
    case '/':
        printf("%lf %c %lf = %lf", a, op, b, a / b);
        break;
    
    case '*':
        printf("%lf %c %lf = %lf", a, op, b, a * b);
        break;
    
    default:
        printf("Invalid expression");
        break;
    }
}