/* -  Inside a function, a static variable can be initialised using the "static" keyword.
-  Global variables are static by default, so the "static" keyword doesn't need to be added.

What's a static variable?
-  A static variable is initialised to "0" if no initial value is specified, and it retains the value across function calls.

Consider this function: */

int incrementAge() {
	int age = 0;
	age++;
	return age;
}

/* -  If "incrementAge()" is called once, "1" will be the return value received. 
-  If it's called more than once, "1" will always be received, as "age" is a local variable and it's re-initialised to "0"
on every single function call.

If the function is changed to: */

int incrementAge() {
	static int age = 0;
	age++;
	return age;
}

// -  Now every time we call this function, we'll get an incremented value:

printf("%d\n", incrementAge()); // 1
printf("%d\n", incrementAge()); // 2
printf("%d\n", incrementAge()); // 3

/* -  The initialisation of "age" to "0" can be omitted in "static int age = 0;" to "static int age;", because static variables
are automatically set to "0" when created.

-  There's also the possibility of static arrays. In this case, each single item in the array is initialised to zero: */

int incrementAge() {
	static int ages[3];
	ages[0]++;
	return ages[0];
}