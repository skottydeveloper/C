/* -  When a variable is defined in a C program, depending on where it's declared, it'll have a different scope.

-  This means that it'll be available in some places, but not in others.  

-  The position determines two types of variables:
	-  Global variables.
	-  Local variables.

Global variables vs local variables:
-  A variable declared inside a function is a local variable, like this: */

int main(void) {
	int age = 37;
}

/* -  Local variables are only accessible from within the function, and when the function ends they stop their existence.
They're usually cleared from the memory, after the function ends.

-  The reason to this, is that local variables are declared on the stack, by default, unless they're explicitly allocated
on the heap using pointers. However, memory will have to be managed itself. 

-  A variable defined outside a function is a global variable, for example: */

int age = 37;

int main(void) {
	// Do something.
}

/* -  Global variables are accessible from any function of the program, and they're available for the whole execution of the
program, until it ends. 

-  

*/