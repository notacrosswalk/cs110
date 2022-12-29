#include <stdio.h>
int main(){
    int n = 12321;
    int storage = n;
    int reverse = 0;
    // Calculation begins
    reverse += (n%10)*10000;; n /= 10;
    reverse += (n%10)*1000; n /= 10;
    reverse += (n%10)*100; n /= 10;
    reverse += (n%10)*10; n /= 10;
    reverse += n%10;
    printf("%c \n", ((storage==reverse) ?'Y' :'N'));
    return 0;
}
