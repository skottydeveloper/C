/* 
-  Write a program to display a message based on the student mark entered through the terminal. 

-  Your program should print the pass/fail status based on the input as follows:
    -  below 0 : Impossible, check the input again.
    -  1-49    : Z - Pity you failed, try harder next time.
    -  50-100  : P - Congratulations, way to go.
    -  over 100: Too awesome for the class, check the input again.

-  Marks can only be integers. */

#include <stdio.h>

int main(void) {
    int mark;

    printf("Enter a mark: ");
    scanf("%d", &mark);

    if (mark > 100) {
        printf("Too awesome for the class, check the input again. \n");
    } else if (mark <= 100 && mark >= 50) {
        printf("P - Congratulations, way to go! \n");
    } else if (mark <= 49 && mark >= 0) {
        printf("Z - Pity you failed, try harder next time. \n");
    } else {
        printf("Impossible, check the input again. \n");
    }
    return (0);
}