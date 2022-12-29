#include <math.h>
#include <stdio.h>
int main() {
    float p=0, t=0, r=0, amount=0, ci=0;
    p=10000.0, t=2.0, r=12.0;
    amount = p*(pow((1.0+(r/100.0)), t));
    ci = amount - p;
    printf("The CI is %f. \n", ci);
    return 0;
} 
