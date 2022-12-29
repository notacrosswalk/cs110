/* Write a program in C to print all even numbers between 1− n, 
where n is a positive integer.*/

#include <stdio.h>

int main() {
    int n = 7; // Change the input here
    for(int i = 2; i <= n; i += 2)
        printf("%d ", i);
    printf("\n");
    return 0;
}