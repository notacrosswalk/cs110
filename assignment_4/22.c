/* Write a program in C to find whether a given number is odd or even. 
You cannot use the ?: operator and the if-else construct. */

#include <stdio.h>

int main() {
    int n = 4; // Change the input here
    while(n%2 == 0) {
        printf("%d is even.\n", n);
        break;
    }
    while(n%2 == 1) {
        printf("%d is odd.\n", n);
        break;
    }
    return 0;
}