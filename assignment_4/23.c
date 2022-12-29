/* Write a program in C to find if a year is a leap year. You cannot use && operaor, ||
operator, ?: operator, break, continue, and any if-else construct. */

#include <stdio.h>

int main() {
    int n = 360; // Change input here
    int a = n % 100 == 0;
    int a2 = 1;
    int b = n % 400 == 0;
    int c = n % 4 == 0;
    int i = 1;
    int res = 0;
    while(c) {
        while(a) {
            while(b) {
                printf("Leap year. \n");
                res = 1;
                c = 0;
                a = 0;
                b = 0;
                a2 = 0;
            }
        }
        while(a2) {
            printf("Leap year. \n");
            res = 1;
            c = 0;
            a2 = 0;
            b = 0;
        }
    }
    while (!res) {
        printf("Not a leap year. \n");
        res = 1;
    }
    return 0;
}