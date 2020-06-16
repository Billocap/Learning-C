//Some statistical iformation about an array;
#include <stdio.h>
#include <math.h>

float largest(int n, float array[]) {
    float veryBig = 0;
    int x, y;

    for (x=0; x<n; x++) {
        for (y=0; y<n; y++) {
            if ( array[y] >= array[x] && array[y] >= veryBig ) {
                veryBig = array[y];
            } else if( array[x] >= veryBig ) {
                veryBig = array[x];
            }
        }
    }

    return veryBig;
}

float average(int n, float array[]) {
    float sum;

    for (int i=0; i<n; i++) {
        sum += array[i];
    }

    return sum / n;
}

float variance(float avg, int n, float array[]){
    float sum = 0;

    for (int i=0; i<n; i++) {
        sum += (array[i] - avg) * (array[i] - avg);
    }

    return sum / n;
}

void main() {
    int n, i;

    printf("What's the size of the array ( between 1 and 100 ) : ");
    scanf("%d", &n);

    float array[n];

    for (i=0; i<n; i++) {
        printf("Enter a number : \n");
        scanf("%f", &array[i]);
    }

    float avg = average(n, array);
    float var = variance(avg, n, array);

    printf("The average is : %.2f\n", avg);
    printf("The largest value is : %.2f\n", largest(n, array));
    printf("The variance value is : %.2f\n", var);
    printf("The standard deviation is : %.2f", sqrt(var));
}