/* 
-  Write a program that prompts the user to enter a word that has 3 letters. 
-  Store this as a character array (i.e. strings in C). 
-  Create a new character array that stores the reverse of the word and displays it on the screen. 
-  Sample output is as follows:
    -  Enter a word with 3 letters> bee
    -  Word entered: bee
    -  Reverse word: eeb

-  Remember all strings in C should be NULL terminated - applies to both entered word and reserve word. 
-  The format specifier to print/scan a string is %s.

-  Use the relevant functions in string.h to append the input string and the reversed string with 'X' in between. 
-  For instance, if the input was bee, newly generated char array should contain: beeXeeb. */

#include <stdio.h>
#include <string.h> 

#define STRLEN 4

int main(void) {
    char str[STRLEN], str_reverse[STRLEN];
    int i;

    printf("Enter a word with three letters: ");
    scanf("%s", str);

    printf("Word entered: %s \n", str);

    for (i = 0; i < STRLEN - 1; i++) {
        str_reverse[i] = str[2 - i];
    }

    str_reverse[STRLEN - 1] = '\0';
    printf("Reverse word: %s \n", str_reverse);

    char str_out[STRLEN * 2];
    strcpy(str_out, str);
    strcat(str_out, "X"); 
    strcat(str_out, str_reverse);

    printf("Word: %s \n", str_out);
    return (0);
}