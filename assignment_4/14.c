/* Write a program in C to reverse a number. */

#include <stdio.h>

int main() {
    int n = 456; // Change the input here
    int n_copy = n, reverse = 0;
    while(n_copy > 0) {
        reverse = reverse*10 + n_copy%10;
        n_copy /= 10;
    }
    printf("%d is %d reversed.\n", reverse, n);
    return 0;
}