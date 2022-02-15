/* 
-  Relevant Formula: 1 milliliter = 0.033814 fluid ounces
-  Write a program to convert a volume in ounces to milliliters. The program should read a volume from the user and display the corresponding value in milliliters. */

#include <stdio.h>
#define OZ_PER_ML 29.57

int main(void) {
    /* Define variables oz and ml. */ 
    double oz, ml;

    printf("This program converts from ounces to millimetres. \n");
    printf("Enter the volume in ounces: ");
    scanf("%lf", &oz);

    /* Convert ounces to millilitres. */
    ml = OZ_PER_ML * oz;

    /* Display millilitres value. */
    printf("%f ounces = %f millimetres \n", oz, ml);

    return (0);
}