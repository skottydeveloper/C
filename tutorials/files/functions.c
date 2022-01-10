/* Functions are the way code is structured into subroutines that can:
-  Have a name given to them.
-  Be called when needed.

This program here uses a function: */

#include <stdio.h>

int main(void) {
	printf("Hello, World!");
}

// The main() function is an important function, as it's the entry point for a C program. Here's another example:

void doSomething(int value) {
	printf("%u", value);
}

/* Functions have four important aspects:
1. They have a name, so they can be called later.
2. They specify a return value.
3. They can have arguments.
4. They have a body, wrapped in curly braces. 

-  The function body is the set of instructions that are executed any time we invoke a function. 

-  If the function has no return value, the keyword "void" can be used before the function name. Otherwise, the function 
return value type is specified.

-  You can't return more than one value from a function. 

-  A function can have arguments. They're optional. If it doesn't have them, inside the parentheses - "void" is inserted, as so: */

void doSomething(void) {
	// do something
}

// In this case, when the function is invoked, it's called with nothing in the parentheses:

doSomething();

// If we have one parameter, the type and the name of the parameter is specified - as so:

void doAThing(int value) {
	// do something
}

// When the function is invoked, the parameter is passed in parentheses - as so:

doSomething(3);

/* We can have multiple parameters, and if so, they can be separated using a comma - both in the declaration and in
the invocation. */

void doAnotherThing(int value1, int value2) {
	// do something
}

doAnotherThing(3, 4);

/* -  Parameters are passed by copy. This means that if "value1" is modified, its value is modified locally. 

-  The value outside of the function, where it was passed in the invocation, doesn't change. 

-  If a pointer is passed as a parameter, the variable's value can be modified - because it can be now accessed 
directly, using its memory address. 

-  You can't define a default value for a parameter.

-  Define the function before calling it, or the compiler will raise a warning and an error. 

-  Inside a function, you can declare variables. */

void doSomethingElse(int value) {
	int doubleValue = value * 2;
}

/* -  A variable is created at the point of invocation of the function and is destroyed when the function ends. It's 
not visible from the outside. 

-  Inside a function, you can call the function itself. This is called recursion. */