/* -  In C, parameters might need to be accepted from the command line, when the command launches. 
-  For simple needs, change the "main()" function signature from: */

int main(void)

// to:

int main (int argc, char *argv[])

/* -  "argc" is an integer number that contains the number of parameters that were provided in the command line.
-  "argv" is an array of strings. 

-  When the program starts, the arguments are provided in those two parameters. 
-  Note that there's always at least one item in the "argv" array: the name of the program.

For example: */
gcc hello.c -o hello

/* If this was the program, "argc" would be four, and "argv" would be an array - containing "gcc", "hello.c", "-o", "hello". 

This is a program that prints the arguments it receives: */

#include <stdio.h>

int main (int argc, char *argv[]) {
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}

// If the name of the program is "hello" and it's run like this: "./hello", this would be the output:
./hello

// If some random parameters are passed, like this: "./hello a b c", this output to the terminal would be printed:
./hello
a
b
c