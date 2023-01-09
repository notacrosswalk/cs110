/* Write a recursive function in C to find the sum 
of all even numbers in a given range. */

#include <stdio.h>

// To be verified

int sumEvenInRange(int a, int b) 
{
    if(a > b) return 0;
    if(a%2) return sumEvenInRange(a+1, b);
    return a + sumEvenInRange(a+2, b);
}

int main() 
{
    int x = 7, y = 13; // Change the inputs here
    printf("%d is the sum of all even numbers in the" 
        "range [%d, %d]", sumEvenInRange(x, y), x, y);
    return 0;
}