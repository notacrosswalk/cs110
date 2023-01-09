/* Write a recursive function in C to find x^n, where 
x is a real value, and n is a positive integer.*/

#include <stdio.h>

float power(float x, int n) 
{
    if(n == 0) return 1.0;
    double y = f(x, n / 2);
    if (n % 2) return x * y * y;
    return y * y;
}

int main()
{
    double a = 6;
    int b = 3; // Change the inputs here
    printf("%d^%d = %d", a, b, power(a, b));
    return 0;
}