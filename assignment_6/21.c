/* Write a recursive function in C to reverse a positive integer. */

#include <stdio.h>

// To be verified

int f(int n, int r) 
{    
    if (n==0) return r;
    return f(n/10, r*10 + (n%10));
}

int main() 
{
    int x = 123456; // Change the input here
    printf("%d is the reverse of %d\n", x, f(x, 0));
    return 0;
}