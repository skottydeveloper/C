/* Task 1:
-  Write a C program that takes exactly 5 integers from the user and store them in an array called inputArray. 
-  Print them on the screen. 
-  Sample output is as follows: 
    -  Enter 5 values separated by spaces> 0 2 3 4 6
    -  Input array is: 0 2 3 4 6

-  Task 2: Extend your program from Task 1:
    -  Now, the program should take another integer input n from the user, create a second array called the outputArray, store the nth power of the integers from inputArray in the outputArray. 
    -  Display the values of both arrays.
    -  Power of a number can be calculated with the pow() function defined in <math.h>.     
    -  Be careful about the input data types of the pow() function. Sample output is as follows:
        -  Enter 5 values separated by spaces> 0 2 3 6 4 
        -  Enter the value of n> 3
        -  Input array is: 0 2 3 6 4
        -  Output array is: 0 8 27 216 64

-  Task 3: Write a function that returns the maximum value in outputArray in Task 2. */

#include <stdio.h>
#include <math.h>

#define ARRAY_LEN 5

int compute_array_max_value(int array_tmp[], int arrayLen);

int main(void) {
    int inputArray[ARRAY_LEN], outputArray[ARRAY_LEN], i, n, maximum_val;

    printf("Enter 5 values separated by spaces: ");
    scanf("%d%d%d%d%d", &inputArray[0], &inputArray[1], &inputArray[2], &inputArray[3], &inputArray[4]);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Input array is: ");

    for (i = 0; i < ARRAY_LEN; i++) {
        printf("%d ", inputArray[i]);
    }
    printf("\n");

    printf("Output array is: ");

    for (i = 0; i < ARRAY_LEN; i++) {
        outputArray[i] = pow((int)inputArray[i], (int)n);
        printf("%d ", outputArray[i]);
    }
    printf("\n");

    maximum_val = compute_array_max_value(outputArray, ARRAY_LEN);
    printf("The maximum value of the outputArray is %d. \n", maximum_val);

    return (0);
}

int compute_array_max_value(int array_tmp[], int arrayLen) {
    int i, maxValue = array_tmp[0];

    for (i = 1; i < arrayLen; i++) {
        if (array_tmp[i] > maxValue) {
            maxValue = array_tmp[i];
        }
    }
    return (maxValue);
}