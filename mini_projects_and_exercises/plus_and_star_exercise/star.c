/* Print a sideways trapezium. */

#include <stdio.h>

int main(void) {
    int row, column;

    for (row = 1; row <= 3; row++) {
        for (column = 1; column <= row; column++) {
            printf("* ");
        }
        printf("\n");
    }

    for (row = 1; row <= 4; row++) {
        for (column = 1; column <= 4; column++) {
            printf("* ");
        }
        printf("\n");
    }

    for (row = 1; row <= 3; row++) {
        for (column = 1; column <= 4 - row; column++) {
            printf("* ");
        }
        printf("\n");
    }
    return (0);
}