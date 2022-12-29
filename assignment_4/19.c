/* Write a program in C to print the factors of a given number. */

#include <stdio.h>

int main() {
    int n = 56; // Change the input here
    printf("The factors of %d are ", n);
    for(int i = 1; i <= n; i++) {
        if(n%i == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}