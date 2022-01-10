/* C is a small language, and the "core" of C doesn't include any I/O functionality.
-  I/O is provided to us by the C Standard Library via a set of functions defined in the "stdio.h" header file. 
-  This library can be imported using: */

#include <stdio.h> // Placed on top of the file of a program. 

/* -  This library provides us with, among many other functions:
	-  printf()
	-  scanf()
	-  sscanf()
	-  fgets()
	-  fprintf()

-  There's three kinds of I/O streams in C:
	-  stdin (standard input)
	-  stdout (standard output)
	-  stderr (standard error)

-  With I/O functions, streams are always worked with. A stream is a high level interface that can represent a device or file.
-  From the C standpoint, reading from a file isn't different from reading from a command line - it's an I/O stream in any case.
-  Some functions are designed to work with a specific stream, like printf(), which is used to print characters to "stdout".
-  Using its more general counterpart "fprintf()", we can specify which stream to write to. 

Printf():
-  A function that's often passed as a string literal, and the program prints the content of the string to the screen: */

printf("Hey!");

/* -  The value of a variable is printed, but a special character/placeholder needs to be added - which changes depending 
on the type of the variable involved. 

For example, using "%d" for a signed decimal integer digit: */

int age = 37;

printf("My age is %d", age);

// More than one variable can be printed by using commas:

int age_yesterday = 37;
int age_today = 36;

printf("Yesterday my age was %d and today is %d", age_yesterday, age_today);

/* -  There are other format specifiers like "%d":
	-  "%c": Character.
	-  "%s": String.
	-  "&f": Floating point numbers.
	-  "%p": Pointers.

-  Escape characters in "printf()" can be used, like "\n", which can be used to make the output create a new line.

Scanf():
-  "printf()" is used as an output function, whereas "scanf()" is an input function.
-  The function is used to get a value from the user running the program, from the command line.
-  The variable is first defined, which will hold the value that's retrieved from the input: */

int age;

// Then "scanf()" is called with two arguments: the format (type) of the variable, and then the address of the variable:

scanf("%d", &age);

/* If we want to get a string as input, remember that a string name is a pointer to the first character, so you don't need
the "&" character before it: */

char name[20];
scanf("%s", name);

// Here's an example that uses both "printf()" and "scanf()":

#include <stdio.h>

int main(void) {
	char name[20];
	printf("Enter your name: ");
	scanf("%s", name);
	printf("You entered %s", name);
}