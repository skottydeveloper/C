/* 
-  Factorial n (denoted by n!) is the multiplication of all positive numbers below n. 

-  It is defined as follows:
    -  n! = (n) x (n-1) x (n-2) x ... x 2 x 1

-  Write a simple for loop that counts down from any integer value n to 1. 
-  Build on this to calculate the factorial of a user input n. */

#include <stdio.h>

int main(void) {
    int n, i, factorial = 1;

    printf("Enter a positive integer value: "); 
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        factorial = factorial * i;
    }
    printf("The factorial of %d is %d. \n", n, factorial);

    return (0);
}