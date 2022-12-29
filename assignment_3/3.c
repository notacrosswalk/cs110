/* Write a program in C to check whether a number is divisible by either 
   7 or 13, or not.*/

#include <stdio.h>
int main() {
    int n = 91;
    if (n%7 == 0 || n%13 == 0) {
        printf("%d is divisible by either 7 or 13. \n", n);
    }
    else {
        printf("%d is not divisible by either 7 or 13. \n", n);
    }
    return 0;
}