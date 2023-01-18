/* Write a recursive function in C to find 
the number of digits in a positive integer.*/

#include <stdio.h>

int numberOfDigits(int n, int r) {
    if(n < 10) return r + 1;
    return numberOfDigits(n/10, r + 1); 
}

int main() {
    int x = 3892;
    printf("%d is the number of digits in %d\n", numberOfDigits(x, 0), x);
    return 0;
}