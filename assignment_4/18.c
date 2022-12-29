/* Write a program in C to check whether a number is a Strong number or not. */

#include <stdio.h>

int main() {
    int n = 145; // Change the input here
    int n_copy = n, sum = 0;
    while(n_copy > 0) {
        int d = n_copy%10, f = 1;
        for(int i = 1; i <= d; i++) {
            f *= i;
        }
        sum += f;
        n_copy /= 10;
    }
    if(sum == n)
        printf("%d is a Strong number.\n", n);
    else
        printf("%d is not a Strong number.\n", n);
    return 0;
}