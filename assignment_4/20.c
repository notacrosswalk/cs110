/* Write a program in C to print the Fibonacci series up to the first n terms.*/

#include <stdio.h>

int main() {
    int n = 5; // Change the input here
    int a = 0;
    int b = 1;
    if(n == 1)
        printf("%d\n", a);
    else if(n == 2)
        printf("%d %d\n", a, b);
    else if(n >= 3) {
        printf("%d %d ", a, b);
        for(int i=0; i < n-2; i++) {
            b = a + b;
            a = b - a;
            printf("%d ", b);
        }
        printf("\n");
    }
    else 
        printf("The value of n issued is invalid.\n");
    return 0;
}