/* 1
*  1 2 3
*  1 2 3 4 5
*  1 2 3 4 5 6 7
*  1 2 3 4 5
*  1 2 3
*  1
*/

#include <stdio.h>

int main() {
    int n = 4; // Change the input here

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= (i*2 + 1); j++)
            printf("%d ", j);
        printf("\n");
    }
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 1; j <= i*2 + 1; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
