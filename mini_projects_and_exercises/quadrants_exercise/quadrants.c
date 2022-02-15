/* 
-  Write a program that takes the x-y coordinates of a point in the Cartesian plane and display the quadrant that the point belongs to.

-  If the input was x1 and y1, you should print one of the following messages:
    -  (x1, y1) is in Quadrant I
    -  (x1, y1) is in Quadrant II
    -  (x1, y1) is in Quadrant III
    -  (x1, y1) is in Quadrant IV
    -  (x1, y1) is on the X-axis
    -  (x1, y1) is on the Y-axis
    -  (x1, y1) is at the origin

-  Your program should run only once - take the input, print the message and exit (no iteration). */

#include <stdio.h>

int main(void) {
    double x1, y1;

    printf("Enter the x and y co-ordinates of a point spearated by a space: ");
    scanf("%lf%lf", &x1, &y1);

    if (x1 == 0 && y1 == 0) {
        printf("(%f, %f) is at the origin. \n", x1, y1);
    } else if (x1 > 0 && y1 == 0) {
        printf("(%f, %f) is at the X-axis. \n", x1, y1);
    } else if (x1 == 0 && y1 > 0) {
        printf("(%f, %f) is at the Y-axis. \n", x1, y1);
    } else if (x1 > 0 && y1 > 0) {
        printf("(%f, %f) is at the quadrant 1. \n", x1, y1);
    } else if (x1 < 0 && y1 > 0) {
        printf("(%f, %f) is at the quadrant 2. \n", x1, y1);
    } else if (x1 < 0 && y1 < 0) {
        printf("(%f, %f) is at the quadrant 3. \n", x1, y1);
    } else if (x1 > 0 && y1 < 0) {
        printf("(%f, %f) is at the quadrant 4. \n", x1, y1);
    }
    return (0);
}