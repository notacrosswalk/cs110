/* Write a recursive function in C to find 
the sum of digits in a positive integer.*/

#include <stdio.h>

int sumOfDigits(int n, int r) {
    if(n < 10) return r + n;
    return sumOfDigits(n/10, r + n%10); 
}

int main() {
    int x = 3892;
    printf("%d is the sum of digits in %d\n", sumOfDigits(x, 0), x);
    return 0;
}