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

/* The C built-in data types are "int", "char", "short", "long", "float", "double", "long". 

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
How can we make sure our numbers don't exceed the limit? What happens if we do exceed the limit?
- If you have an unsigned int number at 255, and it's incremented by one - it becomes 256 in return. 

- However, if you have an unsigned char number at 255, and it's incremented by one - it becomes 0 in return, as it resets 
from the initial possible value.  

- If you have an unsigned char number at 255 and you add 10 to it, you will get the number 9: */
#include <stdio.h>

int main(void) {
    unsigned char j = 255;
    j = j + 10;
    printf("%u", j); // "9"
}

/* If you don't have a signed value, the behaviour is undefined. It will basically give you a huge number which can vary, 
like in this case: */

#include <stdio.h> 

int main(void) {
    char j = 127;
    j = j + 10;
    printf("%u", j); // "4294967177"
}

/* Essentially, C doesn't protect you from going over the limits of a type. This needs to be taken care of.

Warnings When Declaring The Wrong Type
When a variable is declared and initalised with the wrong value, the compiler (such as gcc) should warn you: */

#include <stdio.h>

int main(void) {
    char j = 1000;
}
/* 
variables-and-types.c:4:11: warning: implicit conversion
    from 'int' to
        'char' changes value from 1000 to -24
        [-Wconstant-conversion]
          char j = 1000;
               ~   ^~~~
1 warning generated.

It also warns you in direct assignments: */
#include <stdio.h> 

int main(void) {
    char j;
    j = 1000;
}

// But not if the number is increased by "+=":
#include <stdio.h>

int main(void) {
    char j = 0;
    j += 1000;
}

/* Floating Point Numbers
- Floating point types can represent a much larger set of values than integers can, and can also represent fractions, 
something that integers can't do. 

- Using floating point numbers, numbers are represented as decimal numbers times powers of 10. Floating point numbers would
be written as: 1.29e-3, or -2.3e+5. 

- Floats, doubles and long doubles are used to represent numbers with decimal points (floating point types).
All can represent both positive and negative numbers. 

- Minimum requirements for C, is that a float can represent a range between 10^-37 and 10^+37, and is usually
implemented using 32 bits. 

- Double can represent a larger set fo numbers, with a long double being able to hold even more numbers. 

- A float is represented in 32 bits, and has a precision of 24 significant bits, 8 bits are used to encode the exponent. 

- A double number is represented in 64 bits, with a precision of 53 significant bits. 11 bits are used to encode the exponent.

- The type long double is represented in 80 bits, has a precision of 64 significant bits. 15 bits are used to encode the 
exponent. 

Determining the specific size of each type: */
#include <stdio.h>

int main(void) {
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));
}

/* This would print: 
char size: 1 bytes
int size: 4 bytes
short size: 2 bytes
long size: 8 bytes
flaot size: 4 bytes
double size: 8 bytes
long double size: 16 bytes
    