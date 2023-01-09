/* Write a recursive function in C to find the summation of the 
first n natural numbers.*/

// To be verified
#include <stdio.h>

int summation(int n) 
{
    if(n == 0) return 0;
    return n + summation(n-1);
}

int main() 
{
    int x = 10; // Change the input here
    printf("Sum of the first %d natural numbers = %d.\n", x, summation(x));
    return 0;
}