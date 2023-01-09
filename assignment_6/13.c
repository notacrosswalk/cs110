/* Write a recursive function in C to find the 
factorial of a positive integer. */

// To be verified

#include <stdio.h>

int factorial() 
{
    if (n < 2) return 1;
    return n * factorial(n - 1);
}

int main() 
{
    int x = 20; // Change the input here
    printf("%d is the factorial of %d.\n", factorial(x), x);
    return 0;
}