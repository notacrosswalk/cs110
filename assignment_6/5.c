/* Write a function in C to print all Strong numbers inside a given 
range [a, b]. You need to pass a and b as parameters to the function. */

#include <stdio.h>

void printStrongInRange(int a, int b) 
{
    printf("The strong numbers in the range [%d, %d] are\t", 
            a, b);
    for(int i = a; i <= b; i++) 
    {
        int n_copy = i;
        int sum = 0;
        if (i == 0)
            sum = 1;
        while(n_copy > 0) 
        {
            int factorial = 1;
            int digit = n_copy%10;
            for(int j = 2; j <= digit; j++)
                factorial *= j;
            sum += factorial;
            n_copy /= 10;
        }
        if (sum == i)
            printf("%d\t", i);
    }
    printf("\n");
}

int main() 
{    
    int x = 0, y = 1000; // Change the input here
    printStrongInRange(x, y);
    return 0;
}