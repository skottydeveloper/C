/* -  The preprocessor is a tool that parses the program and ensures that the compiler gets all the things required
before going on with the process.

What does it do?
-  For example, it looks up all the header files you include with the "#include" directive.
-  It also looks at every constant defined, using "#define" and substitutes it with its actual value. 
-  The "#" is common to all preprocessor directives, if a line starts with "#" - it's taken care of by the preprocessor. 

Conditionals
-  One thing that can be done is to use conditionals to change how the program will be compiled, depending on the value of 
an expression.

Example: Checking if the "DEBUG" constant is 0. */

#include <stdio.h>

const int DEBUG = 0;

int main(void) {
	#if DEBUG == 0
	  printf("I'm not debugging\n");
	#else
	  printf("I'm debugging\n");
	#endif
}

/* Symbolic Constants
-  A symbolic constant can be defined: */

#define VALUE 1
#define PI 3.14
#define NAME "Flavio"

/* -  When "NAME", "PI" or "VALUE" is used, the preprocessor replaces its name with the value before executing the program. 
-  Symbolic constants are very useful because names can be given to values without creating variables at compilation time. 

Macros
-  With "#define", a macro can also be defined. A macro differs from a symbolic constant, in that it can accept an 
argument and it typically contains code. A symbolic constant is a value: */

#define POWER(x) ((x) * (x))

/* -  Notice the parentheses around the arguments: it's a good practice to avoid issues when the macro is replaced in the
precompilation process.

-  Then it can be used as so: */

printf("%u\n", POWER(4)); // 16

/* -  The big difference with functions is that macros don't specify the type of their arguments or return values. 
-  Macros, however, are limited to one line definitions. 

If defined
-  "#ifdef" can check if a symbolic constant or a macro is defined. */

#include <stdio.h>
#define VALUE 1

int main(void) {
	#ifdef VALUE
	  printf("Value is defined\n");
	#else
	  printf("Value isn't defined\n");
	#endif
}

/* -  "#ifndev" checks for the opposite (macro not defined).
-  "#if defined" and "#if !defined" is used to do the same task.
-  It's common to wrap some block of code as so: */

#if 0

#endif

// to temporarily prevent it from running, or to use a "DEBUG" symbolic constant:

#define DEBUG 0

#if DEBUG
	// code is only sent to compiler
	// if DEBUG isn't 0
#endif

/* Usable predefined symbolic constants 
-  The preprocessor also defines a number of symbolic constants that can be used, identified by the two underscores before
and after the name, including:
	-  "__LINE__" translates to the current line in the source code file.
	-  "__FILE__" translates to the name of the file.
	-  "__DATE__" translates to the compilation date, in the "Mmm gg aaaa" format.
	-  "__TIME__" translates to the compilation time, in the "hh:mm:ss" format. */