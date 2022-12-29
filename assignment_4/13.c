/* Write a program in C to print the sum and product of digits of an integer. */

#include <stdio.h>

int main() {
    int n = 36; // Change the input here
    int n_copy = n, sum = 0, product = 1;
    while(n_copy > 0) {
        sum += n_copy%10;
        product *= n_copy%10;
        n_copy /= 10;
    }
    printf("For %d, the sum and product of digits are %d and %d respectively.\n", 
           n, sum, product);
    return 0;
}