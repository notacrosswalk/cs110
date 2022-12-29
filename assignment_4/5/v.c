/* 
*    %
*   %%
*  %%%
* %%%%
*/

#include <stdio.h>

int main() {
    int i = 0;
    while(i < 4) {
        int j = 0, k = 3 - i;
        while(k > 0) {
            printf(" ");
            --k;
        }
        while (j <= i) {
            printf("%%");
            ++j;
        }
        printf("\n");
        ++i;
    }
    return 0;
}