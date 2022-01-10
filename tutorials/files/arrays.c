/* -  An array is a variable that stores multiple values.
-  Every value in the array, in C, must have the same type. 
-  You can define an array of int values like this, for example: */

int prices[5];

/* -  The size of the array must always be specified.
-  A constant can be used to define the size: */

const int SIZE = 5;
int prices[SIZE];

// An array can be initialised at definition time, like this:

int prices[5] = { 1, 2, 3, 4, 5 };

// A value can also be assigned after the definition, in this way:

int prices[5];

prices[0] = 1;
prices[1] = 2;
prices[2] = 3;
prices[3] = 4;
prices[4] = 5;

// Or, more practical, using a loop:

int prices[5];

for (int i = 0; i < 5; i++) {
	prices[i] = i + 1;
}

/* An item in the array can be referenced by using square brackets after the array variable name, adding an integer
to determine the index value. Like this: */
prices[0]; // array item value: 1
prices[1]; // array item value: 2

/* -  Array indexes start from 0, so an array with 5 items, like the "prices" array above, will have items ranging from
prices[0] to prices[4].

-  In C, all elements of an array are stored sequentially, one right after another. 

-  The variable name of the array, "prices" (in above example), is a pointer to the first element of the array. 
It can be used like a normal pointer. */