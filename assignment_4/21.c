/* Write a program in C to find x^n for a given 
* positive real value x and a positive integer n. */

#include <stdio.h>

int main() {
    int x = 3, n = 2; // Change the input here
    int i = 0;
    int res = 1;
    while (i < n) {
        res *= x;
        i++;
    }
    printf("%d\n", res);
    return 0;
}