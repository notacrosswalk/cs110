/* Write a program in C to check an input character is in which category 
among the four:
i. A small letter and a vowel.
ii. A capital letter and a consonant.
iii. A character in English but does not fall in the last two categories.
iv. Not a character in English (maybe a special character, e.g., $). */

#include <stdio.h>

int main() {
    char c = '1'; // Change the input here
    if(c >= 'a' && c <= 'z') {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            printf("%c is a small letter and a vowel.\n", c);
        else 
            printf("%c is a character in English but not a small letter and a"
                   " vowel or a capital letter and a consonant.\n", c);
    }
    else if(c >= 'A' && c <= 'Z') {
        if (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
            printf("%c is a capital letter and a consonant.\n", c);
        else 
            printf("%c is a character in English but not a small letter and a"
                   " vowel or a capital letter and a consonant.\n", c);
    }
    else
        printf("%c is not a character in English.\n", c);
        
    return 0;
}