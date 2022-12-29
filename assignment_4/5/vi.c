/* 
* @@@@
* @@@
* @@
* @
*/

#include <stdio.h>

int main() {
    int i = 4;
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