#include <stdio.h>
int main(){
    int n = 12345;
    int sum = 0;
    // Calculation begins
    sum += n%10; n /= 10;
    sum += n%10; n /= 10;
    sum += n%10; n /= 10;
    sum += n%10; n /= 10;
    sum += n%10;
    printf("The sum of the digits is %d. \n", sum);
    return 0;
}
 
