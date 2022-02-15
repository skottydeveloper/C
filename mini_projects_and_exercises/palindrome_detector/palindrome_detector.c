/* 
-  A palindrome is a word, phrase, number, or other sequence of characters which reads the same backward as forward. 
-  For more information read the first paragraph in this article. 
-  Write a function that checks if a string is a palindrome. 
-  Use your function to check if the string created in Task 5 is a palindrome.
    - return 1: if the string input to the function is a palindrome
    - return 0: otherwise */

#include <stdio.h>
#include <string.h>

int main(void) {
    int i, indicator;
    char str[10];

    printf("Enter a word: ");
    scanf("%s", str);

    printf("Word entered: %s \n", str);

    int len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            indicator = 0;
            printf("Debug msg: Indicator = 0\n");
        } else if (str[i] == str[len - 1 - i]) {
            indicator = 1;
            printf("Debug msg: Indicator = 1\n");
        }
    }

    if (indicator == 1) {
        printf("It's a palindrome.\n");
    } else if (indicator == 0) {
        printf("It's not a palindrome.\n");
    }

    return (0);
}