// Write a program in C to find the factorial of a number.

#include <stdio.h>

int main() {
    int n = 11; // Change the input here
    int i = 1;
    int f = 1;
    while (i <+ n) {
        f *= i;
        i++;
    }
    printf("The factorial of %d is %d.\n", n, f);
    return 0;
}