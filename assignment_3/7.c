/* Write a program in C to check whether a character is an alphabet 
   in English or not.*/

#include <stdio.h>
int main() {
    char c = 'X';
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        printf("%c is an alphabet in English. \n", c);
    }
    else {
        printf("%c is not an alphabet in English. \n", c);
    }
    return 0;
}