/* 
-  A rational number is any number that can be expressed as a fraction of two integers. 
-  Write a program that reads a rational number from the user and displays it as a mixed numeral. */

#include <stdio.h>

int main(void) {
    int numerator, denominator; /* Define variables numerator and denominator. */
    int integer, remainder; /* The output variables. */

    /* Take the input numbers. */
    printf("Enter the numerator and denominator separated by a space: ");
    scanf("%d%d", &numerator, &denominator);

    /* Convert improper fraction to proper fraction. */
    integer = numerator / denominator;
    remainder = numerator % denominator;

    /* Display the value of the proper fraction. */
    if (integer == 0) {
        printf("%d/%d = %d/%d", numerator, denominator, remainder, denominator);
    } else {
        printf("%d/%d = %d %d/%d", numerator, denominator, integer, remainder, denominator);
    }
    return (0);
}