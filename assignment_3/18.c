/* Write a program in C to find if a year is a leap year. Do not use &&, ||,
and ?: operators.*/

#include <stdio.h>

int main() {
    int year = 0, c = 0;
    // Input
    year = 2000;
    // Input
    if(year%4 == 0) {
        if (year%100 == 0) {
            if(year%400 == 0)
                c = 1;
            else
                c = 0;
        }
        else
            c = 1;
    }
    // Output
    if(c == 1)
        printf("%d is a leap year. \n", year);
    else
        printf("%d is not a leap year. \n", year);

    return 0;
}