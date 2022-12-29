/* Write a program in C to check whether a number is divisible only by either 
of 7 and 13 (but not both), or not.*/

#include <stdio.h>
int main() {
    int n = 91;
    if (n%7 == 0 && n%13 == 0) {
        printf("%d is NOT divisible only by either of 7 or 13 (but not both)."
               "\n", n);
    }
    else if (n%7 == 0 || n%13 == 0) {
        printf("%d is divisible only by either of 7 or 13 (but not both). \n", 
               n);
    }
    else {
        printf("%d is NOT divisible only by either of 7 or 13 (but not both)."
               "\n", n);
    }
    return 0;
}