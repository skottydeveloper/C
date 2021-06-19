/* Loops allow you to iterate over arrays. 

For Loops
-  Using the "for" keyword defines the rules of the loop up front, and then provides the block that's going to be executed repeatedly.

As so: */

for (int i = 0; i <= 10; i++) {
	// instructions to be repeated
}

/* -  The "(int i = 0; i <= 10; i++)" block contains three parts of the looping details:
	-  The initial condition (int i = 0).
	-  The test (i <= 10).
	-  The increment (i++). 

-  The loop variable is first defined, named "i" (common variable name used for loops; "j" is a common variable
for nested loops (a loop inside another loop)).

-  The variable is initialised at the 0 value, and the first iteration is done. Then it's incremented as the increment
part says (i++ in this case, incrementing by 1), and all the cycle repeats until you get to 10. 

-  Inside the loop main block, we can access the variable "i" to know at which iteration we are.
-  The program should print " 0 1 2 3 4 5 6 7 8 9 10". */

for (int i = 0; i <= 10; i++) {
	printf("%u ", i);
}

// Loops can start from a high number, and go a lower number - as so:

for (int i = 10; i > 0; i--) {
	// instructions to be repeated
}

// You can also increment the loop variable by a certain value:

for (int 1 = 0; i < 1000; i = i + 30) {
	// instructions to be repeated
}

/* While Loops 
-  "while" is used to check for a condition. */

while (i < 10) {

}

/* -  This assumes that "i" is already defined and initialised with a value. 
-  This loop will be an infinite loop unless the "i" variable is incremented at some point inside the loop. 
-  Infinite loops softlock the program. */

// A "correct" while loop:

int i = 0;

while (i < 10) {
	// do something
	i++;
}

/* Do While Loops 
-  Executes a block, and then maybe repeats it; this is done by using the "do while" keyword. */

int i = 0;

do {
	// do something
	i++;
} while (i < 10);

/* The block that contains the "// do something" comment is always executed at least once, regardless of the 
condition check at the bottom. Then, until "i" is less than 10, the block is repeated. 

Breaking out of a loop using break:
-  In all the C loops, there's a way to break out of a loop at any point in time, immediately - regardless of the
conditions set for the loop.

-  This is done, using the "break" keyword.

-  This is useful in many cases, e.g. checking for the value of a variable. */

// For example:

for (int i = 0; i <= 10; i++) {
	if (i == 4 && someVariable == 10) {
		break;
	}
}

// You can have a seemly infinite loop that ends when a condition occurs, by defining this inside the loop block:

int i = 0;
while (1) {
	// do something
	
	i++;
	if (i == 10) break;
}