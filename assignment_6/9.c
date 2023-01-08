/* Write a function in C that takes three integers as arguments and 
returns the largest one’s value. */

#include <stdio.h>

int max(int a, int b, int c) 
{
    int result = c;
    
    if(a >= b) 
    {
        
        if(a >= c)
            result = a; 
    }
    else 
    {
        
        if(b >= c)
            result = b;    
    }
    
    return result;
}

int main() 
{
    int x = 0, y = -3, z = 1;

    int answer = max(x, y, z);

    printf("%d is the largest of %d, %d and %d.\n", 
        answer, x, y, z);
    
    return 0;
}