/* -  Using the "typedef" and "enum" keywords we can define a type that can have either one value or another.
-  This is the syntax of an enumerated type: */

typedef enum {
	// Values.
} TYPENAME;

// The enumerated type that's created is usually, by convention, uppercase. Here's a simple example:

typedef enum {
	true,
	false
} BOOLEAN; // An inpractical example, as C comes with a "bool" type.

// Another example is to define weekdays:

typedef enum {
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
} WEEKDAY;

// A simple program that uses this enumerated type:

#include <stdio.h>

typedef enum {
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
} WEEKDAY;

int main(void) {
	WEEKDAY day = monday;

	if (day == monday) {
		printf("It's Monday!");
	} else {
		printf("It's not Monday!")
	}
    }
}

/* -  Every item in the enum definition is paired to an integer, internally. In this example, "monday" is 0, "tuesday" is 1 and
so on. This means that the conditional could've been "if (day == 0)" instead of "if (day == monday)", but it's way simpler to 
reason with names rather than numbers, so it's a very convenient syntax. */