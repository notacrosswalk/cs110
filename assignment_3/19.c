/* Write a program in C to find a minimum of three numbers. Do not use &&, ||, 
and ?: operators.*/

#include <stdio.h>

int main() {
    // Inputs
    int a = 3, b = 2, c = 1;
    // Inputs
    int minimum = 0;
    if(a == b && a == c) {
        printf("All the three numbers are equal. \n");
        minimum = a;
    }
    else if(a <= b && a <= c)
        minimum = a;
    else if(b <= a && b <= c)
        minimum = b;
    else if(c <= b && c <= a)
        minimum = c;
    printf("%d is the minimum of %d, %d and %d. \n", minimum, a, b, c);
    return 0;
}