#include <stdio.h> // stdio library = standard input-output library. Gives access to input/output functions. 

int main(void) { // The main() function is the entry point of any C program. 
    printf("Hello, World!"); // The printf function is provided by the stdio library. 
}

/* What is a function, in the context of C?
-  A function is a routine that takes one or more arguments, and returns a single value. 

-  In the case of "main()", the function gets no arguments, and returns an integer. This is identified using the "void" keyword
for the argument, and the "int" keyword for the return value. 

-  The function has a body, which is wrapped in curly braces. Inside the body, is the code the function needs to perform
its operations. 

-  The "printf()"" function is written differently, as you can see. It has no return value defined, and a string is passed,
wrapped in double quotes. The type of argument wasn't specified. 

-  This is because this is a function invocation. Somewhere, inside the "stdio" library, "printf" is defined as: 
    int printf(const char *format, ...);

    This is where the function is run. 

-  The "main()" function, defined above - will be run by the operating system when the program is executed. 

How do we execute a C program?
-  C is a compiled language. To run the program, it must first be compiled. For macOS or Linux, it already includes one. 

-  For Windows, type in "gcc". This command should return an error saying that you didn't specify any file.
If so, then the C compiler is there, ready to use. Type the program above into a "hello.c" file. 

Using nano editor:
-  Type "nano hello.c".
-  Type the program code, in the editor. 
-  Press ctrl-X to exit. 
-  Confirm by pressing the "y" key, then press "enter" to confirm the file name.
-  Back on the terminal, type "gcc hello.c -o hello".
-  A "hello" executable should be generated, now type: "./hello", to run it. 
-  It prints out "Hello, World!"
-  The "./" is used to tell the terminal that the command is in the current folder. 
*/