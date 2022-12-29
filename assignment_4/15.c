/* Write a program in C to find whether a given positive integer is prime or 
not.*/

#include <stdio.h>

int main() {
    int n = 6; // Change the input here
    int i = 2, flag = 0;
    while(i < n) {
        if(n%i == 0) {
            flag = 1;
            break;
        }
        i++;
    }
        if(flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
}