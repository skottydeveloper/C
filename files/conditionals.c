/* If Statements 
-  In an "if" statement, you can check for a condition to be true, and then execute the block provided in the curly brackets. */

int a = 1;

if (a == 1) {
	// do something
}

// - You can append an "else" block to execute a different block if the original condition turns out to be false. 

int a = 1;

if (a == 2) { // Make sure to use "==", and not "=". It'll always return true if you do so. 
	// do something
} else {
	// do something else
}

// You can have multiple else blocks by stacking together multiple "if" statements:

int a = 1;

if (a == 2) {
	// do something
} else if (a == 1) {
	// do something else
} else {
	// do something else again
}

/* Switch 
-  Removes the need to do many if/else/if blocks, if in the situation of needing to do so. 
-  The variable can be provided as a condition, and a series of "case" entry points for each expected value can be expected too. */

int a = 1;

switch (a) {
	case 0:
	// do something
	break; 
	case 1:
	// do something else
	break;
	case 2: 
	// do something else
	break;
}

/* -  The "break" keyword is used to avoid the next case being executed when the one before ends. 
-  A "catch-all" case can be added at the end, labelled "default". */

int a = 1;

switch (a) {
	case 0:
	// do something
	break;
	case 1:
	// do something else
	break;
	case 2:
	// do something else
	break;
	default:
	// handle all the other cases
	break;
}