//Using pointers with arrays.
#include <stdio.h>
#include <stdlib.h>

void main() {
    //Using arrays.
    int array[10];
    
    for ( int c=0; c<10; c++ ) {
        printf("Type an number : ");
        scanf("%d", array + c);
    }

    for ( int c=0; c<10; c++ ) {
        printf("%d\n", *(array + c));
    }

    //Using memory allocation.
    char *data;

    data = (char * ) calloc(10, sizeof(char));

    if ( data == NULL ) {
        printf("Unable the allocate memory");
        exit(0);
    }

    for ( int i=0; i<10; i++ ) {
        printf("Type an integer : ");
        scanf("%d", data + i);
    }

    for ( int i=0; i<10; i++ ) {
        printf("%d\n", *(data + i));
    }

    free(data);
}