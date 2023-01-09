/* Write a tail-recursive function in C to find the summation 
of the first n natural numbers. */

#include <stdio.h>

int f(int n, int r)
{
    if (n==0) return r;
    return f(n - 1, r+n);
}

int main()
{
    int x = 25; // Change the inputs here
    printf("%d is the sum of the first %d natural numbers.\n", f(x, 0), x);
}