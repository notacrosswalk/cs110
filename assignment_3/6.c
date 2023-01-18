/* Write a program in C to find the maximum of two numbers. 
   Do not use the ?: operator.*/
#include <stdio.h>
int main() {
    float a = 1.0, b = 2.0;
    if (a > b) {
        printf("%d is the maximum of the two numbers. \n", a);
    }
    else if (a < b) {
        printf("%d is the maximum of the two numbers. \n", b);
    }
    else {
        printf("Both the numbers are equal. \n");
    }
    return 0;
}