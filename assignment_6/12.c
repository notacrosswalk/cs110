/* Write a function in C that takes a positive integer as input and returns the leading
digit in its decimal representation. For example, the leading digit of 234567 is 2. */

#include <stdio.h>

int leadingDigit(int n) {    
    int result = 0;
    while(n > 0) {
        if(n/10 == 0)
            result = n%10;
        n /= 10;
    }
    return result;
}

int main() {
    int x = 32784724; // Change the input here
    int answer = leadingDigit(x);
    printf("%d the leading digit in the decimal representation of %d\n",
        answer, x);
    return 0;
}
