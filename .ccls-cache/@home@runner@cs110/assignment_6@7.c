/* Write a function in C to print all Perfect numbers inside a 
given range [a, b]. You need to pass a and b as parameters to the 
function. */

#include <stdio.h>

void printPerfectInRange(int a, int b) 
{

    printf("The Perfect numbers in the range [%d, %d] are\t", a, b);

    for(int i = a; i <= b; i++) 
    {
        
        int sum = 0;
        
        for(int j = 1; j < i; j++) 
        {

            if(i%j == 0) 
                sum += j;
            
        }   

        if(sum == i && i != 0)
            printf("%d\t", i);
    }

    printf("\n");
    
}

int main() 
{
    
    int x = 0, y = 1000;

    printPerfectInRange(x, y);
    
    return 0;
    
}