/* 
-  C is a statically typed language.
-  This means that any variable has an associated type, and this type is known at compilation time. 
-  When a variable is created in C, the type of it has to be specified at the declaration.

Example 1 - Initialising a variable "age", with type "int":
    int age;

-  A variable name can contain any uppercase/lowercase letter, can contain digits and the underscore character, but it can't
start with a digit.

-  You can also initialise a variable at declaration, specifying the initial value.

Example 2:
    int age = 37;

-  Once a variable is declared, it can be used in your program code. Its value can be changed at any time, using the "="
operator, e.g. like in "age = 100;" (the new value has to be of the same type). 

Below is an example of what's learnt, being applied - in action:
*/

#include <stdio.h>

int main(void) {
    int age = 0; 
    age = 37.2; 
    printf("%u", age); 
    //The compiler will raise a warning at compile time, and will convert the decimal number to an integer value. 
}

/* 
The C built-in data types are "int", "char", "short", "long", "float", "double", "long". 

Integer Numbers
-  C provides the following types to define integer values:
    -  char
    -  int
    -  short
    -  long
-  Char: Stores letters of the ASCII chart. Also used to hold small integers from -128 to 127. It takes at least one byte. 
-  Int: Takes at least 2 bytes. 
-  Short: Takes at least 2 bytes. 
-  Long: Takes at least 4 bytes. 

Unsigned Integers
For the four mentioned data types, we can use "unsigned" to start the range at 0, instead of a negative number, as so:
-  unsigned char: Ranges from 0 to at least 255.
-  unsigned int: Ranges from 0 to at least 65,535. 
-  unsigned short: Ranges from 0 to at least 65,535.
-  unsigned long: Ranges from 0 to at least 4,294,967,295. 

The Problem With Overflow


*/