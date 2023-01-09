/* Write a recursive function in C to find the 
ith number in the Fibonacci sequence.*/

#include <stdio.h>

// To be verified

int fibonacci(int n) 
{
    if(n == 1) return 0;
    else if(n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() 
{
    int x = 33; // Change the input here
    printf("%d is the %dth number in the Fibonacci sequence.\n", fibonacci(x), x);
    return 0;
}