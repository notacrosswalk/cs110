// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int bro = printf("Hi!\n"); // 4
    int Bro = printf("Hi!  \n"); // 6
    printf("%d \n", bro);
    return 0;
}

/* The comma operator (represented by the token, ) 
* is a binary operator that evaluates its first operand and discards the result, 
* it then evaluates the second operand and returns this value (and type). 
* The comma operator has the lowest precedence of any C operator, 
* and acts as a sequence point. */

// printf() does not work without arguments, unlike print() from Python and System.out.println() from Java