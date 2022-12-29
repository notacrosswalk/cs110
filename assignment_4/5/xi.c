/* 
*    0
*   01
*  012
* 0123
*/

#include <stdio.h>
int main() {
    int n = 4; // Change the input here
    int i = 0;
    while(i < n) {
        int j = 1, k = n;
        while(k > i+1) {
            printf(" ");
            k--;
        }
        while(j <= i) {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}