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

Let’s say the address assigned to variable num is 0x7fff5694dc58, which means whatever value we would be assigning
to num should be stored at the location: 0x7fff5694dc58. */

#include <stdio.h>
int main()
{
   int num = 10;
   printf("Value of variable num is: %d", num);
   /* To print the address of a variable we use %p
    * format specifier and ampersand (&) sign just
    * before the variable name like &num.
    */
   printf("\nAddress of variable num is: %p", &num);
   return 0;
}

/* Output: 
-  Value of variable num is: 10
-  Address of variable num is: 0x7fff5694dc58 */

/* Here's another example program to show how a pointer is used and declared: */

#include <stdio.h>
int main() {
     int num = 10; // Variable declaration.
     int *p; // Pointer declaration.
     p = 0x7fff5694dc58; // Assigning address of num to the pointer p.
     printf("Address of variable num is: %p", p);
     return 0; // Exit program once the function is fully executed. Outside of main(), it exits the loop in a function.
}

/* Output: 
-  Address of variable num is: 0x7fff5694dc58

Operators that are used with pointers:
-  "Address of" operator (&)
   -  The address of a variable is displayed using an "&" variable. 

Example: */
printf("Address of var is: %p", &num); // %p is a format specifier which is used for displaying the address in hex format. 

// -  "Value at address" operator (*)
/* If you need a pointer to store the address of an integer variable then the data type of the pointer should be an int. 
Same case applies with the other data types. */

int *p1 // Pointer to an integer variable. 
double *p2 // Pointer to a variable of data type double.
char *p3 // Pointer to a character variable. 
float *p4 // Pointer to a float variable. 

// By using the "*" operator, we can access the value of a variable through a pointer. For example:
double a = 10;
double *p;
p = &a;

// "*p" would give us the value of the variable "a". The following statement would display "10" as the output:
printf("&d", *p);

// Similarly, if we assign a value to *pointer like this:
*p = 200;

// It would change the value of variable "a". The statement above will change the value of "a" from 10 to 200. 

// Example of a pointer, demonstrating the use of "&" and "*":
#include <stdio.h>
int main() {
     // Pointer of integer type, this can hold the address of an integer type variable. 
     int *p;

     int var = 10;

     // Assigning the address of variable "var", to the pointer "p". "p" can hold the address of "var" because "var" is an integer type variable. 
     p = &var;

     printf("Value of variable var is: &d", var);
     printf("\nValue of variable var is: %d", *p);
     printf("\nAddress of variable var is: %p", &var);
     printf("\nAddress of variable var is: %p", p);
     printf("\nAddress of pointer p is: %p", &p); 
     return 0; // Exit program once the function is fully executed. Outside of main(), it exits the loop in a function.
}

/* Output:
Value of variable var is: 10
Value of variable var is: 10
Address of variable var is: 0x7fff5ed98c4c 
Address of variable var is: 0x7fff5ed98c4c 
Address of pointer p is: 0x7fff5ed98c50 */

// Another example. This code replaces the value of "a", with "b":

// We have a char variable "ch" and a pointer "ptr", that holds the address of "ch".
char ch = 'a'; // Single quotes are used for individual characters, double for string literals. 
char *ptr;

// Read the value of ch.
printf("Value of ch: %c", ch);
// or
printf("Value of ch: %c", *ptr);

// Change the value of ch.
ch = b;
// or
*ptr = 'b';

/* Structure Operators 
-  A collection of variables (can be of different types), under a single name. 
-  Before creating structure variables, a data type needs to be defined.
-  The "struct" keyword is used to define the structure.

Why use struct operators?
-  You can create different variables to store different types of information about something. 
-  You can easily create more variables to store information for more than one person.  

Syntax of struct:
struct structureName {
     dataType member1;
     dataType member2;
     ...
};

Here's an example: */
struct Person { // Here a derived type "struct Person" is defined, which allows for variables of this type to be created.
     char name[50];
     int citNo;
     float salary;
};

/* Create struct variables:
-  When a struct type is declared, no storage or memory is allocated.
-  To allocate memory of a given structure type and work with it, variables need to be created.

How to create structure variables: */
struct Person {
     char name[50];
     int citNo;
     float salary;
};

int main() {
     struct Person person1, person2, p[20];
     return 0;
}

// Another way of creating a struct variable:
struct Person {
     char name[50];
     int citNo;
     float salary;
} person1, person2, p[20];

/* -  In both cases, two variables "person1" and "person2", and array variable "p" having 20 elements of type "struct Person" are created.

Access members of a structure:
-  There are two types of operators used for accessing members of a structure. 
   1. Member operator (".").
   2. Structure pointer operator (->).

-  Suppose, you want to access the "salary" of "person2": */
person2.salary

// Example: Add two distances.

// Program to add two distances (feet-inch)
#include <stdio.h>
struct Distance {
     int feet;
     float inch;
} dist1, dist2, sum;

int main() {
     printf("1st distance\n");
     printf("Enter feet: ");
     scanf("%d", &dist1.feet);

     printf("Enter inch: ");
     scanf("%f", &dist1.inch);
     printf("2nd distance\n");

     printf("Enter feet: ");
     scanf("%d", &dist2.feet);

     printf("Enter inch: ");
     scanf("%f", &dist2.inch);

     // adding feet
     sum.feet = dist1.feet + dist2.feet;

     // adding inches
     sum.inch = dist1.inch + dist2.inch;

     // changing to feet if inch is greater than 12
     while (sum.inch >= 12) {
          ++sum.feet;
          sum.inch = sum.inch - 12;
     }

     printf("Sum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
     return 0;
}

/* Output:
1st distance
Enter feet: 12
Enter inch: 7.9
2nd distance
Enter feet: 2
Enter inch: 9.8
Sum of distanes = 15'-5.7" */

/* Keyword typedef
-  The "typedef" keyword is used to create an alias name for data types. 
-  It's commonly used with structures to simplify the syntax of declaring variables. */

// This code:
struct Distance {
     int feet;
     float inch;
};

int main() {
     struct Distance d1, d2;
}

// Is equivalent to:
typedef struct Distance {
     int feet; 
     float inch;
} distances;

int main() {
     distances d1, d2;
}

/* Nested structures: 
-  You can create structures withing a structure in C programming. For example: */
struct complex {
     int imag;
     float real;
};

struct number {
     struct complex comp;
     int integers;
} num1, num2;

// Suppose, you want to set "imag" of "num2" variable to 11. Here's how you can do it:
num2.comp.imag = 11;

/* C pointers to struct:
-  Here's how you can create pointers to structs: */
struct name {
     member1;
     member2;
     .
     .
};

int main() {
     struct name *ptr, Harry; // "ptr" is a pointer to "struct".
}

/* Example: Access members using pointer.
-  To access members of a structure using pointers, the "->" operator is used. */

#include <stdio.h>
struct person {
     int age;
     float weight;
};

int main() {
     struct person *personPtr, person1;
     personPtr = &person1;

     printf("Enter age: ");
     scanf("%d", &personPtr->age);

     printf("Enter weight: ");
     scanf("%f", &personPtr->weight);

     printf("Displaying:\n");
     printf("Age: %d\n", personPtr->age);
     printf("weight: %f", personPtr->weight);

     return 0;
}

/* -  In this example, the address of "person1" is stored in the "personPtr" pointer using "personPtr = &person1;".
-  Now, you can access the members of "person1" using the "personPtr" pointer.
-  "personPtr->age" = (*personPtr).age
-  "personPtr->weight" = (*personPtr).weight. 

Passing structs to functions:

How to pass structures to a function: */
#include <stdio.h>
struct student {
   char name[50];
   int age;
};

// function prototype
void display(struct student s);

int main() {
   struct student s1;

   printf("Enter name: ");

   // read string input from the user until \n is entered
   // \n is discarded
   scanf("%[^\n]%*c", s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);

   display(s1); // passing struct as an argument

   return 0;
}

void display(struct student s) {
   printf("\nDisplaying information\n");
   printf("Name: %s", s.name);
   printf("\nAge: %d", s.age);
}

/* Output:
Enter name: Bond
Enter age: 13

Displaying information
Name: Bond
Age: 13 

-  Here, a struct variable "s1" of type "struct student" is created. 
-  The variable is passed to the "display()" function using "display(s1);" statement. 

Return struct from a function: */
#include <stdio.h>
struct student {
    char name[50];
    int age;
};

// function prototype
struct student getInformation();

int main() {
    struct student s;

    s = getInformation();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);
    
    return 0;
}

struct student getInformation() {
  struct student s1;

  printf("Enter name: ");
  scanf ("%[^\n]%*c", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);
  
  return s1;
}

/* -  Here, the "getInformation()" function is called using "s = getInformation();" statement.
-  The function returns a structure of type "struct student".
-  The returned structure is displayed from the main() function.
-  The return type of "getInformation()" is also "struct student". 

Passing struct by reference:
-  Structs can also be passed by reference. 
-  During pass by reference, the memory addresses of struct variables are passed to the function. */

#include <stdio.h>
typedef struct Complex {
    float real;
    float imag;
} complex;

void addNumbers(complex c1, complex c2, complex *result); 

int main() {
    complex c1, c2, result;

    printf("For first number,\n");
    printf("Enter real part: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);

    printf("For second number, \n");
    printf("Enter real part: ");
    scanf("%f", &c2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c2.imag);

    addNumbers(c1, c2, &result); 
    printf("\nresult.real = %.1f\n", result.real);
    printf("result.imag = %.1f", result.imag);
    
    return 0;
}

void addNumbers(complex c1, complex c2, complex *result) {
     result->real = c1.real + c2.real;
     result->imag = c1.imag + c2.imag; 
}

/* For first number,
Enter real part: 1.1
Enter imaginary part: -2.4
For second number,
Enter real part: 3.4
Enter imaginary part: -3.2

result.real = 4.5
result.imag = -5.6 

-  In the above program, three structure variables - "c1", "c2" and the address of "result" is passed to the "addNumbers()" function. Here, "result" is passed
by reference. 
-  When the "result" variable inside the "addNumbers()" is altered, the "result" variable inside the "main()" function is also altered accordingly. 

C unions:
-  An union is a user-defined type similar to structs in C, except for one key difference:
   -  Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time. 

How a union is defined:
-  The "union" keyword is used to define unions.

Example: */

// Defines a derived type "union car".
union car {
     char name[50];
     int price;
};

/* Create union variables:  
-  When an union is defined, it creates an user-defined type. However, no memory is allocated. 
-  To allocate memory for a given union type and work with it, we need to create variables. 

Example: */
union car {
     char name[50];
     int price;
};

int main() {
     union car car1, car2, *car3;
     return 0;
}

// Another way of creating union variables is, as so:
union car {
     char name[50];
     int price;
} car1, car2, *car3;

// In both cases, union variables "car1", "car2" and an union pointer "car3" of "union car" type are created. 

/* Access members of an union:
-  The "." operator is used to access members of an union. 
-  To access pointer variables, the "->" operator is used. 
-  In the above example:
   -  To access "price" for "car1", "car1.price" is used.
   -  To access "price" using "car3", either "(*car3).price" or "car3->price" can be used.

Difference between unions and structures: */
#include <stdio.h>
union unionJob
{
   //defining a union
   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes", sizeof(sJob));
   return 0;
}

/* Output:
Size of union = 32
Size of structure = 40

-  Here, the size of "sJob" is 40 bytes, because:
   -  The size of "name[32]" is 32 bytes.
   -  The size of "salary" is 4 bytes.
   -  The size of "workerNo" is 4 bytes.

-  However, the size of uJob is 32 bytes. 
-  It's because the size of a union variable will always be the size of its largest element. 
-  In the above example, the size of its largest element, (name[32]), is 32 bytes.
-  With a union, all members share the same memory. */

/* Miscellaneous Operators
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