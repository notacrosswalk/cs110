/* Write a program in C to input the basic salary of an employee and calculate 
his/her gross salary according to the following rules:
i. If basic salary is up to 30000 rupees, he/she gets 20% HRA and 30% DA.
ii. If basic salary is up to 60000 rupees but more than 30000 rupees, he/she gets
25% HRA and 35% DA.
iii. If the basic salary is more than 60000 rupees, he/she gets 30% HRA and 40%
DA. */

#include <stdio.h>

int main() {
    float basic = 0, gross = 0, hra = 0, da = 0;
    basic = 36000.0;
    if (basic <= 30000.0) {
        hra = 0.2*basic;
        da = 0.3*basic;
    }
    else if (basic <= 60000.0) {
        hra = 0.25*basic;
        da = 0.35*basic;
    }
    else if (basic > 60000.0) {
        hra = 0.3*basic;
        da = 0.4*basic;
    }
    else {
        printf("Basic salary has an unacceptable value. \n");
    }
    gross = basic + hra + da;
    printf("Basic Salary : Rs. %f \n", basic);
    printf("HRA : Rs. %f \n", hra);
    printf("DA : Rs. %f \n", da);
    printf("Gross Salary : Rs. %f \n", gross);
    return 0;
}