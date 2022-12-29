#include <stdio.h>
int main(){
    int n = 12345;
    int product = 1;
    // Calculation begins
    product *= n%10; n /= 10;
    product *= n%10; n /= 10;
    product *= n%10; n /= 10;
    product *= n%10; n /= 10;
    product *= n%10;
    printf("The product of the digits is %d. \n", product);
    return 0;
}
