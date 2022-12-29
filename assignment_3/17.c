/* Write a program in C to calculate total electricity bill 
according to the given conditions:
i. For the first 50 units, the cost is rupees 2.50/unit.
ii. For the next 75 units, the cost is rupees 3.00/unit.
iii. For the next 100 units, the cost is rupees 3.50/unit.
iv. For units above 225, the cost is Rs. 4.00/unit.
v. An additional surcharge of 20% applies to the total amount if more than 200
units are consumed. */

#include <stdio.h>

int main() {
    int units = 0;
    // Input goes below
    units = 227;
    // Input goes above
    float amount = 0.0;
    if(units <= 50)
        amount = units*2.5;
    else if(units <= 50+75)
        amount = (50*2.5)+((units-50)*3.00);
    else if(units <= 50+75+100)
        amount = (50*2.5)+(75*3.0)+((units-50-75)*3.5);
    else if(units > 225) {
        amount = (50*2.5)+(75*3.0)+(100*3.5)+((units-225)*4.0);
        amount *= 1.2;
    }
    printf("The total electricity bill for %d units consumed would be Rs. %f"
           " \n", units, amount);
    return 0;
}