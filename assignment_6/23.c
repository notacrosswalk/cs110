/* Write a tail-recursive function in C to 
find the factorial of a positive integer. */

/* Tail recursion is defined as a recursive function 
in which the recursive call is the last statement 
that is executed by the function. So basically nothing 
is left to execute after the recursion call. */

#include <stdio.h>

// To be verified

int f(int n, int r)
{
    if(n==0) return r;
    return f(n-1, r*n);
}

int main() 
{
    int x = 5; // Change the input here
    printf("%d is the factorial of %d\n", f(x,1), x);
    return 0;
}