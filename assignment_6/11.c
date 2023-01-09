/* Write a function in C that takes a positive integer n as an argument and returns the
smallest power of two that is greater than or equal to n. */

#include <stdio.h>
#include <math.h>

int smallestPowerOfTwo(int n) {    
    int n_copy = n;
    int power = 0;
    int result = 0;
    while(n_copy > 1) {
        n_copy /= 2;
        power++;
    }
    if(pow(2, power) == n)
        result = pow(2, power);
    else if(n == 0)
        result = 1;
    else 
        result = pow(2, ++power);
    return result;
}

int main() {
    int x = 13; // Change the input here
    int answer = smallestPowerOfTwo(x);
    printf("%d is the smallest power of 2 that is greater than or equal to %d.\n",
        answer, x);
    return 0;
}