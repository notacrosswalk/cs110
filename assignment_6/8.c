/* Write a function in C to find the minimum of two numbers. */

#include <stdio.h>

int min(int a, int b) 
{

    int result = a;

    if(b < a)
        result = b;
        
    return result;
}

int main() 
{

    int x = 2, y = 1; // Change the inputs here

    int answer = min(x, y);

    printf("%d is the minimum of %d and %d.\n", answer, x, y);
    
    return 0;
}