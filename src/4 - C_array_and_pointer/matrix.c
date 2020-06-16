//Matrix math;
#include <stdio.h>

void getMatrix(int n, int m, int array[][10]) {
    for( int y=0; y<n; y++ ) {
        for ( int x=0; x<m; x++ ) {
            printf("The value in %d x %d : ", y + 1, x + 1);
            scanf("%d", &array[y][x]);
        }
    }
}

void transpose(int *n, int *m, int array[][10]) {
    int trans[10][10];

    for ( int y=0; y<*m; y++) {
        for ( int x=0; x<*n; x++ ) {
            trans[y][x] = array[x][y];
        }
    }

    for ( int y=0; y<*m; y++) {
        for ( int x=0; x<*n; x++ ) {
            array[y][x] = trans[y][x];
        }
    }

    int c = *m;
    *m = *n;
    *n = c;
}

void display(int n, int m, int array[][10]) {
    for ( int y=0; y<n; y++ ) {
        printf("| ");
        for( int x=0; x<m; x++ ) {
            printf("%4d ", array[y][x]);
        }
        printf("|\n");
    }
}

void sum(int n, int m, int m1[][10], int m2[][10]) {
    int result[10][10];
    
    for ( int y=0; y<n; y++ ) {
        for ( int x=0; x<m; x++ ) {
            result[y][x] = m1[y][x] + m2[y][x]; 
        }
    }

    display(n, m, result);
}

void multiply(int n1, int m1, int n2, int m2, int a1[][10], int a2[][10]) {
    int result[10][10];

    for ( int y=0; y<n1; y++ ) {
        for ( int x=0; x<m2; x++ ) {
            result[y][x] = 0;
            for ( int c=0; c<m1; c++ ) {
                result[y][x] += a1[y][c] * a2[c][x];
            }
        }
    }

    display(n1, m2, result);
}

void main() {
    int n1, m1, t1, n2, m2, t2, x, y, z;
    printf("Type the size of the first matrix : [rows] [columns] [transpose]\n");
    printf("transpose : n for none, m for multiplication, s for sum or b for both\n");
    scanf("%d %d %c", &n1, &m1, &t1);

    printf("Type the size of the second matrix : [rows] [columns] [transpose]\n");
    printf("transpose : n for none, m for multiplication, s for sum or b for both\n");
    scanf("%d %d %c", &n2, &m2, &t2);

    int array1[10][10], array2[10][10];

    printf("---[ First Matrix ]---\n");
    getMatrix(n1,m1,array1);

    printf("---[ Second Matrix ]---\n");
    getMatrix(n2,m2,array2);

    if ( t1=='s' || t1=='b' ) {
        transpose(&n1, &m1, array1);
        t1='n';
    }

    if ( t2=='s' || t2=='b' ) {
        transpose(&n2, &m2, array2);
        t2='n';
    }

    if ( n1 == n2 && m1 == m2 ) {
        printf("The sum is : \n");
        sum(n1, m1, array1, array2);
    } else {
        printf("Unable to sum\n");
    }

    if ( t1=='m' || t1=='b' ) {
        transpose(&n1, &m1, array1);
        t1='n';
    }

    if ( t2=='m' || t2=='b') {
        transpose(&n2, &m2, array2);
        t2='n';
    }

    if ( m1 == n2 ) {
        int result[n1][m2];
        
        printf("The multiplication is : \n");
        multiply(n1, m1, n2, m2, array1, array2);
    } else {
        printf("Unable to multiply\n");
    }
}