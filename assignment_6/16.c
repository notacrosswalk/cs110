/* Write a recursive function in C to find x^n, where 
x is a real value, and n is a positive integer.*/

#include <stdio.h>

// To be verified

double power(double x, int n) 
{
    if(n == 0) return 1.0;
    double y = power(x, n / 2);
    if (n % 2) return x * y * y;
    return y * y;
}

int main()
{
    double a = 6;
    int b = 3; // Change the inputs here
    printf("%lf^%d = %lf\n", a, b, power(a, b));
    return 0;
}