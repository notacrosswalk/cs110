/* Write a function in C to print all Armstrong numbers inside a 
given range [a, b]. You need to pass a and b as parameters to the 
function. */

#include <stdio.h>
#include <math.h>

void printArmstrongInRange(int a, int b) 
{

    printf("The Armstrong numbers in the range [%d, %d] are \t", 
        a, b);
    
    for(int i = a; i <= b; i++) 
    {

        int n_copy = i;
        
        int sum = 0;
        int n_digits = 0;
        
        while(n_copy > 0) {
            n_digits++;
            n_copy /= 10;
        }

        n_copy = i;
        
        while(n_copy > 0) 
        {
            
            int digit = n_copy%10;

            sum += pow(digit, n_digits);
            
            n_copy /= 10;
        }

        if(sum == i)
            printf("%d\t", i);
    }
    printf("\n");
}

int main() 
{

    int x = 10, y = 10000; // Change the inputs here

    printArmstrongInRange(x, y);
    
    return 0;
}