/* Write a recursive function in C to find the 
greatest common divisor (GCD) of two numbers.*/

#include <stdio.h>

int gcd(int a, int b);

int main() {
    int x = 56, y = 64;
    int answer = gcd(x, y);
    printf("%d is the GCD of %d and %d\n", answer, x, y);
    return 0;
}

int gcd(int a, int b) {
    if(b != 0) 
        return gcd(b, a%b);
    else
        return a;
}