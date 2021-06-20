// In C, strings are a special kind of array: they're arrays of "char" values.

char name[7];

/* -  The "char" type is used to commonly store letters of the ASCII chart.
-  A string can be initalised like how a normal array is initialised. */

char name[7] = { "F", "l", "a", "v", "i", "o" };

// A string literal (also called a string constant), a sequence of characters enclosed in double quotes:

char name[7] = "Flavio";

// A string can be printed via "printf()" using "%s":

printf("%s", name);

/* -  Notice how "Flavio" is six chars long, but the array has a defined length of 7?

-  This is because the last character in a string must be a "0" value, the string terminator, and space must be made for it. 

-  "string.h" is an important standard library that's provided by C. It abstracts many of the low level detail of working
with strings, and provides a set of useful functions. 

-  The library can be loaded into a program by adding at the top: */

#include <string.h>

/* Once that's done, you have access to methods, such as:
-  "strcopy()": To copy a string over another string. 
-  "strcat()": To append a string to another string.
-  "strcmp()": To compare two strings for equality.
-  "strncmp()": To compare the first "n" characters of two strings.
-  "strlen()": To calculate the length of a string. */