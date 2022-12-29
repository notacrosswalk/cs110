/* Write a program in C to print the prime numbers that are less 
than a given value n. */

#include <stdio.h>

int main() {
    int n = 5; // Change the input here
    int f = 1;
    for(int i = 1; i <= n; i++) {
         f *= i;
    }
    printf("%d is the factorial of %d\n", f, n);
    return 0;
}