/* Write a program in C to input month as a number and print the number of days 
   in that month.*/

#include <stdio.h>
int main() {
    int month = 2, days = 0;
    if (month >= 1 && month <=12) {
        if (month > 7) {
            if (month % 2 == 0) {
                days = 31;
            }
            else {
                days = 30;
            }
        }
        else {
            if (month == 2) {
                days = 28;
            }
            else if (month %2 == 0) {
                days = 30;
            }
            else {
                days = 31;
            }
        }
        printf("Month %d has %d days in it. \n", month, days);
    }
    else {
        printf("%d is not a valid month number. \n", month);
    }
    return 0;
}