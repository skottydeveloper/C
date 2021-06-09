/* C offers us a variety of operators that can be used to operate on data, such as:
-  Arithmetic operators.
-  Comparison operators.
-  Logical operators.
-  Compound assignment operators.
-  Bitwise operators.
-  Pointer operators.
-  Structure operators.
-  Miscellaneous operators. 

Arithmetic Operators
-  Arithmetic operators are either binary or unary.

-  Binary operators work, using two operands:
     -  Assignment: Has "=" operator. i.e. "a = b".
     -  Addition: Has "+" operator. i.e. "a + b".
     -  Subtraction: Has "-" operator. i.e. "a - b".
     -  Multiplication: Has "*" operator. i.e. "a * b".
     -  Division: Has "/" operator. i.e. "a / b".
     -  Modulo: Has "%" operator. i.e. "a % b".

-  Unary operators only take one operand:
     -  Unary plus: Has "+" operator, i.e. "+a".
     -  Unary minus: Has "-" operator, i.e. "-a".
     -  Increment: Has "++" operator, i.e. "a++" (increments the "a" variable after using it) or "++a" (increments the "a"
     variable before using it).
     -  Decrement: Has "--" operator, i.e. "a--" or "--a".
*/

// For example:
int a = 2;
int b;
b = a++; // b is 2, a is 3.
b = ++a; // b is 4, a is 4.
b = a--; // b is 4, a is 3.
b = --a; // b is 2, a is 2.

/* Comparison Operators
-  Equal operator: Has "==" operator, i.e. "a == b".
-  Not equal operator: Has "!=" operator, i.e. "a != b".
-  Bigger than: Has ">" operator, i.e. "a > b".
-  Less than: Has "<" operator, i.e. "a < b".
-  Bigger than or equal to: Has ">=" operator, i.e. "a >= b".
-  Less than or equal to: Has "<=" operator, i.e. "a <= b".

Logical Operators
-  These operators work great with boolean values:
     -  NOT: Has "!" operator, i.e. "!a".
     -  AND: Has "&&" operator, i.e. "a && b".
     -  OR: Has "||" operator, i.e. "a || b".

Compound Assignment Operators
-  These operators perform an assignment and an arithmetic operation, at the same time:
     -  Addition assignment: Has "+=" operator, i.e. "a += b".
     -  Substraction assignment: Has "-=" operator, i.e. "a -= b".
     -  Multiplication assignment: Has "*=" operator, i.e. "a *= b".
     -  Division assignment: Has "/=" operator, i.e. "a /= b".
     -  Modulo assignment: Has "%=" operator, i.e. "a %= b". 

Bitwise Operators

Pointer Operators
-  A pointer is a variable that stores the address of another variable. 
-  Unlike other variables that hold values of a certain type, pointer holds the address of a variable. 
-  For example, an integer variable holds (or you can say stores) an integer value, however an integer pointer holds the address of a integer variable.

In this program, we have a variable num of int type:
-  The value of num is 10 and this value must be stored somewhere in the memory. 
-  A memory space is allocated for each variable that holds the value of that variable, this memory space has an address.
-  The value of the variable is stored in a memory address, which helps the C program to find that value when it's needed.

Structure Operators

Miscellaneous Operators
The Ternary Operator
-  The only operator in C to work with three operands; it's a short way to express conditionals.
-  It looks like this: "<condition> ? <expression> : <expression>".

For example: */
a ? b : c /* If "a" is evaluated to true, then the "b" statement is executed, otherwise "c" is. The ternary operator works 
the same as an if/else conditional, except it's shorter in expression and can be inclined into an expression. */

/* Sizeof Operator
-  The "sizeof" operator returns the size of the operand that's passed. A variable or a type, can be passed. 

For example: */
#include <stdio.h>

int main(void) {
    int age = 37; 
    printf("%ld\n", sizeof(age));
    printf("%ld", sizeof(int));
}

/* Operator Precedence
-  When using these operators, attention must be paid to when using them together in a single expression. 
-  For example: */
int a = 2;
int b = 4;
int c = b + a * a / b - a;

/* What's the value of "c"? Does the addition go before the multiplication and the division? There's a set of rules to solve
this puzzle. 
-  In order from less precedence to more precedence, we have:
    -  The "=" assignment operator. 
    -  The "+" and "-" binary operators.
    -  The "*" and "/" operators.
    -  The "+" and "-" unary operators.

-  Operators also have an associativity rule, which is always left to right, except for the unary operators and the assignment.

For example: */
int c = b + a * a / b - a;

/* 
-  "a * a / b" is first executed, which can be separated into "a * a", and "/b": "2 * 2 = 4", "4 / 4 = 1". 
-  Then the sum and the substraction can be performed: 4 + 1 - 2. The value of c is 3. 
-  Parentheses are good to use, as they make any similar expression easier to read and understand. They have higher
priority over anything else.

The above example expression can be rewritten as: */
int c = b + ((a * a) / b) - a;