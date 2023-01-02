/* Write a program in C to print the prime numbers that are less 
than a given value n. */

#include <math.h>
#include <stdio.h>

int main() {
    int n = 14; // Change the input here
    printf("The prime numbers less than %d are ", n);
    for(int i = 2; i < n; i++) {
        int condition = 1;
        for(int j = i - 1; j >= sqrt(i); j--) {
            if(i%j == 0) {
                condition = 0;
                break;
            }
        }
        if(condition == 1)
            printf("%d ", i);
    }
    return 0;
}