// Write a program in C to check whether a number is Armstrong or not.

#include <stdio.h>

int main() {
    int n = 153;
    int a = n;
    int d_1 = a%10;
    a /= 10;
    int d_2 = a%10;
    a /= 10;
    int d_3 = a%10;
    int s = (d_1*d_1*d_1) + (d_2*d_2*d_2) + (d_3*d_3*d_3);
    if (s == n)
        printf("%d is an Armstrong number. \n", n); 
    else 
        printf("%d is not an Armstrong number. \n", n);
    return 0;
}