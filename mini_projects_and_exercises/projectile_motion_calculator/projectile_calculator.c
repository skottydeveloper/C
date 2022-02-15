/* 
-  Relevant Formulas: 
    -  flight time = (horizontal displacement) / ( velocity * cos(angle of elevation))
    -  height = velocity * sin(angle of elevation) * time - 0.5 * G * time^2
    -  G is the acceleration of gravity, which is 9.8 ms^-2

-  Write a program that computes the duration of a projectile's flight and the elevation when the target is reached. 

-  Your program should read:
    -  The horizontal displacement.
    -  The magnitude of the initial velocity.
    -  The angle of elevation.

-  Pick appropriate data types of the inputs. 
-  Display the duration and height of the projectile. */

/*****************************************************************************
 * Purpose: This program calculates the duration and the height of an object
   that allows projectile motion. 
******************************************************************************/

/*****************************************************************************
 * Header files and preprocessing directives used.
******************************************************************************/
#include <stdio.h>
#include <math.h>

#define G 9.8

/*****************************************************************************
 * Function prototypes used.
******************************************************************************/
void printMenu(void);
double flightTime(double displacement, double velocity, double angle);
double flightHeight(double velocity, double angle, double time);

/*****************************************************************************
 * Main function.
******************************************************************************/
int main(void) {
    double h_displacement, velocity, angle;
    double time, height;

    printMenu();

    scanf("%lf%lf%lf", &h_displacement, &velocity, &angle);

    time = flightTime(h_displacement, velocity, angle);
    height = flightHeight(velocity, angle, time);

    printf("The flight time is %.2f seconds. \n", time);
    printf("The flight height is %.2f meters. \n", height);

    return 0;
}

/******************************************************************************
 * printMenu() function description:
 * The 'printMenu()' function prints the initial menu with all instructions on
 * how to use this program.   
 *
 * Inputs:
 * -  None.
 *
 * Outputs:
 * -  None.
******************************************************************************/
void printMenu(void) {
    printf("Enter the following in one line, separated by spaces: \n");
    printf("\t1. Horizontal displacement in metres (m). \n");
    printf("\t2. Magnitude of the velocity in metres per second (m/s). \n");
    printf("\t3. The angle of elevation in radians. \n");
    printf("Choice: "); 
}

/******************************************************************************
 * flightTime() function description:
 * The 'flightTime()' function calculates and returns the flight duration.   
 *
 * Inputs:
 * -  Displacement: The horizontal displacement of the projectile in metres. 
 * -  Velocity: The initial velocity of the projectile in metres/second.
 * -  Angle: The initial projectile angle in radians. 
 *
 * Outputs:
 * -  Flight duration in seconds, returned as a double. 
******************************************************************************/
double flightTime(double displacement, double velocity, double angle) {
    return displacement / (velocity * cos(angle));
}

/******************************************************************************
 * flightHeight() function description:
 * The 'flightHeight()' function calculates and returns the flight duration.   
 *
 * Inputs:
 * -  Velocity: The initial velocity of the projectile in metres/second.
 * -  Angle: The initial projectile angle in radians. 
 * -  Time: The flight time in seconds, this can be calculated with flightTime,
 * prior to calling this function.
 * 
 * Outputs:
 * -  Flight height in metres, returned as a double. 
******************************************************************************/
double flightHeight(double velocity, double angle, double time) {
    return (velocity * sin(angle) * time) - (0.5 * G * pow(time, 2.0));
}