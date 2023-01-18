/* Write a program in C to find whether a given number is odd or even. 
Do not use the ?: operator.*/

#include <stdio.h>
int main() {

    int n = 3; // Change the input here
    
    if (n%2 == 0) {
        printf("%d is even. \n", n);
    }
    
    else {
        printf("%d is odd. \n", n);
    }
    
    return 0;
}