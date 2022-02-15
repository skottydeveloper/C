/* 
-  Use two nested for loops to print a rectangle of “+”. 
-  Your display should print 5 rows and 10 columns exactly. */

#include <stdio.h>

int main(void) {
    int row, column;

    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= 10; column++) {
            printf("+ ");
        }
        printf("\n");
    }
    return (0);
}