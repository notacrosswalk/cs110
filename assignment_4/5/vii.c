/*
* &&&&
*  &&&
*   &&
*    &
*/

#include <stdio.h>

int main() {
    int i = 4;
    while(i > 0) {
        int j = i, k = 4 - i;
        while(k > 0) {
            printf(" ");
            --k;
        }
        while (j > 0) {
            printf("&");
            --j;
        }
        printf("\n");
        --i;
    }
    return 0;
}