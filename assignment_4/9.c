/* Write a program in C to find the greatest common divisor 
(GCD) of two numbers.*/ 

#include <stdio.h>

int main() {
    int n_1 = 3, n_2 = 6; // Change the inputs here
    int gcd = 0;
    for(int i = 1; i <= n_1; i++) {
        if(n_1%i == 0 && n_2%i == 0) {
            gcd = i;
        }
    }
    printf("The GCD of %d and %d is %d.\n", n_1, n_2, gcd);
    return 0;
}