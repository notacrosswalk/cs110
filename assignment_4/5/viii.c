/* 
* 1234
* 123
* 12
* 1
*/

#include <stdio.h>

int main() {
    int n = 4; // Change the input here
    int i = n;
    while(i > 0) {
        int j = i; int k = 1;
        while (j > 0) {
            printf("%d", k);
            --j;
            k++;
        }
        printf("\n");
        --i;
    }
    return 0;
}