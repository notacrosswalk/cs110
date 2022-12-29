// Write a program in C to print the multiplication table of any number.

#include <stdio.h>

int main() {
    int n = 5; // Change the input here
    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, (n*i));
        i++;
    }
    return 0;
}
