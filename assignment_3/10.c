/* Write a program in C to check whether a character is an alphabet in English, 
a digit, or something else.*/

#include <stdio.h>
int main() {
    char c = '#';
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        printf("%c is an alphabet in English. \n", c);
    }
    else if(c>=48 && c<=57) {
        printf("%c is a digit. \n", c);
    }
    else {
        printf("%c is neither an alphabet in English nor a digit but it's " 
               "something else. \n", c);
    }
    return 0;
}