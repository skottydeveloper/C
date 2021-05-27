/* Constants are declared similarly to variables, except it has the const keyword - before it, and a value always needs
to be specified.

Like this: */
const int age = 37;
// OR
const int AGE = 37; //Preferred in C, as it improves readability. Uppercase means constant, lowercase means variable. 

/* A constant name follows the same rules for variable name: i.e. AGE and Age10 are valid, but 1AGE isn't. Another way to define
constants is by using this syntax: */
#define AGE 37 /* Type isn't needed, "=" sign isn't needed, the ";" is ommitted too. The C compiler will infer the type
from the value specified, at compile time. */