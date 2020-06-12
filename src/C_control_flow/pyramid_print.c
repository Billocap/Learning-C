//Prints all kinds of pyramids.
#include <stdio.h>

void main() {
    int height, y, x, fbase, offset;
    char n, i, h;
    printf("usage : [height] [fill] [direction] [size] : \n");
    printf("fill : s for stars , a for letters or n for numerals. \n");
    printf("direction : i for inverted or n for normal. \n");
    printf("size: f for full or h for half. \n");
    scanf("%d %c %c %c", &height, &n, &i, &h);
    if( h == 'h' ) {
        if( i == 'n' ) {
            for( y=0; y<=height; y++ ) {
                for( x=1; x<=y; x++ ) {
                    if ( n == 's' ) {
                        printf("%c ", '*');
                    } else if ( n == 'a' ) {
                        printf("%c ", 64 + (y % 26));
                    } else if ( n == 'n' ) {
                        printf("%d ", x);
                    }
                }

                printf("\n");
            }
        } else if ( i == 'i' ) {
            for( y=height; y>=0; y-- ) {
                for( x=1; x<=y; x++ ) {
                    if ( n == 's' ) {
                        printf("%c ", '*');
                    } else if ( n == 'a' ) {
                        printf("%c ", 64 + (y % 26));
                    } else if ( n == 'n' ) {
                        printf("%d ", x);
                    }
                }

                printf("\n");
            }
        }
    } else if ( h == 'f' ) {
        if ( i == 'n' ) {
            offset = height - 1;

            printf("\n");
            for ( y=0; y<height; y++ ) {
                fbase = height + y - 1;

                for ( x=0; x<=offset; x++ ) {
                    printf("  ");
                }

                for( x=0; x<=(fbase - offset); x++ ) {
                    if ( n == 's' ) {
                        printf("%c ", '*');
                    } else if ( n == 'a' ) {
                        printf("%c ", 64 + ((y + 1) % 26));
                    } else if ( n == 'n' ) {
                        printf("%d ", x + 1);
                    }
                }
                printf("\n");
                offset -= 1;
            }
        } else if ( i == 'i' ) {
            offset = 0;

            printf("\n");
            for ( y=height; y>0; y-- ) {
                fbase = height + y - 2;

                for ( x=0; x<=offset; x++ ) {
                    printf("  ");
                }

                for( x=0; x<=(fbase - offset); x++ ) {
                    if ( n == 's' ) {
                        printf("%c ", '*');
                    } else if ( n == 'a' ) {
                        printf("%c ", 64 + ((offset + 1) % 26));
                    } else if ( n == 'n' ) {
                        printf("%d ", x + 1);
                    }
                }
                printf("\n");
                offset += 1;
            }
        }
    }
}