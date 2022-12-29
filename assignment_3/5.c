/* Write a program in C to check whether a number is 
   negative, positive, or zero. */

#include <stdio.h>
int main() {
    int n = 3;
    if (n > 0) {
        printf("%d is positive. \n", n);
    }
    else if (n < 0) {
        printf("%d is negative. \n", n);
    }
    else {
        printf("%d is equal to zero. \n", n);
    }
    return 0;
}