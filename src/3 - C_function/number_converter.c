//Convert number from one format to another.
#include <stdio.h>

long long converter(int n, int from, int to) {
    long long result = 0;
    int base = 1;

    while (n != 0) {
        result += base * (n % to);
        n /= to;
        base *= from;
    }
    
    return result;
}

void main() {
    int n, from, to;
    printf("usage : [number] [from] [to] : \n");
    printf("from / to : 2 for binary, 8 for octal and 10 for decimal \n");
    scanf("%d %d %d", &n, &from, &to);
    printf("The number %d in base %d is %lld", n, to, converter(n, from, to));
}