/* Realize the output of the following program: */

#include <stdio.h>
int main() {
int n = 2;
printf("Line: %d, n = %d\n", __LINE__, n);
while(printf("Line: %d, n = %d\n", __LINE__, n), n) {
printf("Line: %d, n = %d\n", __LINE__, n--);
}
printf("Line: %d, n = %d\n", __LINE__, n);
return 0;
}

/* OUTPUT
Line: 6, n = 2
Line: 7, n = 2
Line: 8, n = 2
Line: 7, n = 1
Line: 8, n = 1
Line: 7, n = 0
Line: 10, n = 0
*/