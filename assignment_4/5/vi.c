/* 
* @@@@
* @@@
* @@
* @
*/

#include <stdio.h>

int main() {
    int n = 4; // Change the input here
    int i = n;
    while(i > 0) {
        int j = i;
        while (j > 0) {
            printf("@");
            --j;
        }
        printf("\n");
        --i;
    }
    return 0;
}