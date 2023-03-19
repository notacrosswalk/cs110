/* Write a C program to input a number and check whether the number is a Perfect number.
*  A Perfect number is a positive integer equal to the sum of its proper positive divisors.
*  For example, 6 is the first perfect number as proper divisors of 6 are 1, 2, 3, and the
*  sum of its proper divisors is 6 = 1 + 2 + 3. */

#include <stdio.h>

int main() {

    int n = 6; // Change the input here

    if(n > 0) {
        int sum = 0;

        int i = 0;
        for(i = 1; i <= n/2; i++) {
            if(n%i == 0)
                sum += i;
        }

        if(sum == n)
            printf("%d is a Perfect number.\n", n);
        else
            printf("%d is not a Perfect number.\n", n);
    }
    else
        printf("The value of n entered is invalid. It can only be a positive number.\n");

    return 0;
}