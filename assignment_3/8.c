/* Write a program in C to check whether a character is an uppercase or 
   lowercase alphabet.*/

#include <stdio.h>
int main() {
    char c = 'X';
    if (c >= 65 && c <= 90) {
        printf("%c is an uppercase alphabet in English. \n", c);
    }
    else if (c >= 97 && c <= 122) {
        printf("%c is a lowercase alphabet in English. \n", c);
    }
    else {
        printf("%c is not an alphabet in English. \n", c);
    }
    return 0;
}