/* Write a program in C to check whether a character is a vowel or consonant.*/

#include <stdio.h>
int main() {
    char c = 'X';
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            printf("%c is a vowel. \n", c);
        }
        else {
            printf("%c is a consonant. \n", c);
        }
    }
    else {
        printf("%c is not an alphabet in English. \n", c);
    }
    return 0;
}