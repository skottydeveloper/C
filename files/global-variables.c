/* The difference between global and local variables, in more detail:

-  A local variable is defined inside a function, and is only available inside that function, as so: */

#include <stdio.h>

int main(void) {
	char j = 0;
	j += 10;
	printf("%u", j); // 10
}

/* -  "j" isn't available anywhere outside the "main" function.

-  A global variable is defined outside of any function, as so: */

#include <stdio.h>

char i = 0;

int main(void) {
	i += 10;
	printf("%u", i); // 10
}

/* -  A global variable can be accessed by any function in the program. Access is not limited to reading the value: the variable
can be updated by any function. 

-  Due to this, global variables are one way of sharing the same data between functions. 
-  The main difference with local variables is that the memory allocated for variables is freed once the function ends. 
-  Global variables are only freed when the program ends. */