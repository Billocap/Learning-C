//Find the LCM of two integers typed by the user.
#include <stdio.h>

void main() {
    int a, b, div = 1;
    printf("Type two integers : ");
    scanf("%d %d", &a, &b);

    while (1) {
        if ( div % a == 0 && div % b == 0) {
            break;
        }

        div += 1;
    }
    
    printf("The LCM of %d and %d is %d", a, b, div);
}