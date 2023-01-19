/* Write a recursive function in C to find the sum 
of all odd numbers in a given range. */

#include <stdio.h>

// To be verified

int sumOddInRange(int a, int b) 
{
    if(a > b) return 0;
    if(a%2 == 0) return sumOddInRange(a+1, b);
    return a + sumOddInRange(a+2, b);
}

int main() 
{
    int x = 7, y = 13; // Change the inputs here
    printf("%d is the sum of all even numbers in the" 
        "range [%d, %d]", sumOddInRange(x, y), x, y);
    return 0;
}