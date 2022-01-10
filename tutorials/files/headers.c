/* -  When programs get more complex, multiple files need to be created. Parts of a program can be moved to a separate file,
then a header file can be created to do so.

-  A header file looks like a normal C file, except it ends with ".h" instead of ".c". Instead of the implementations of
functions and other parts of a program, it holds the declarations.

-  #include <stdio.h> is a header file, where "#include" is a preprocessor directive. 

-  The preprocessor goes and looks up the "stdio.h" file in the standard library because "<>" brackets were used around it.

-  To include your own header files, quotes are used like this: */

#include "myfile.h"

/* -  The above will look up "myfile.h" in the current folder.

-  The folder structure for libraries can also be used: */

#include "myfolder/myfile.h"

// This program calculates the years since a given year:

#include <stdio.h>

int calculateAge(int year) {
	const int CURRENT_YEAR = 2020;
	return CURRENT_YEAR - year;
}

int main(void) {
	printf("%u", calculateAge(1983));
}

// If the "calculateAge" function were to move to another separate file, a "calculate_age.c" file can be created:

int calculateAge(int year) {
	const int CURRENT_YEAR = 2020;
	return CURRENT_YEAR - year;
}

/* A "calculate_age.h" file can be created, where the function prototype is placed, which is the same as the function in the
".c" file, except the body: */

int calculateAge(int year);

/* Now in the main ".c" file, the "calculateAge()" function definition can be removed, and "calculate_age.h" can be imported -
which will make the "calculateAge()" function available: */

#include <stdio.h>
#include "calculate_age.h"

int main(void) {
	printf("%u", calculateAge(1983));
}

// To compile a program composed by several files, they need to all be listed in the command line, like this:

gcc -o main main.c calculate_age.c

// For more complex setups, a Makefile is necessary to tell the compiler how to compile the program. 