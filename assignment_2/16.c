#include <stdio.h>
int main(){
    int n = 12345;
    int reverse = 0;
    // Calculation begins
    reverse += (n%10)*10000;; n /= 10;
    reverse += (n%10)*1000; n /= 10;
    reverse += (n%10)*100; n /= 10;
    reverse += (n%10)*10; n /= 10;
    reverse += n%10;
    printf("The reversed number is %d. \n", reverse);
    return 0;
}
