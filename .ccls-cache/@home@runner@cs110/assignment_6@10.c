/* Write a function in C that takes a real number as an argument 
and returns that number’s absolute value. */

#include <stdio.h>

double absolute(double n) 
{
    double value = n;

    if(n < 0)
        value = -1*n;
    
    return value;
}

int main() {

    double x = -3.1; // Change the input here

    printf("%lf is the absolute value of %lf.\n", absolute(x), x);
    
    return 0;
}