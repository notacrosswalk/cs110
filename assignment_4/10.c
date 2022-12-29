/* Write a program in C to count the number of digits in a number. */

#include <stdio.h>

int main() {
    int n = 9212122; // Change the input here
    int n_copy = n, count = 0;
    while(n_copy > 0) {
        count++;
        n_copy /= 10;
    }
    printf("%d has %d digits in it.\n", n, count);
    return 0;
}