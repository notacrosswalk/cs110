/* Realize the output of the following program: */

#include <stdio.h>
int main() {
int n = 2;
printf("Line: %d, n = %d\n", __LINE__, n);
while(n, printf("Line: %d, n = %d\n", __LINE__, n)) { //forever
printf("Line: %d, n = %d\n", __LINE__, n--);
}
printf("Line: %d, n = %d\n", __LINE__, n);
return 0;
}

/* Output too long (it's infinite) to type out */