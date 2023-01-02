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
    int n = 7; // Change the input here

    for(int i = 0; i < n; i++) {
        // If n is even
        if(n%2 == 0) {
            printf("n cannot be even!\n");
            break;
        }
        // If n is odd
        else {
            // If i belongs to the upper pyramid or the base
            if(i <= n/2) {
                for(int j = 1; j <= (i*2 + 1); j++)
                    printf("%d ", j);
                printf("\n");
            }
            // If i belongs to the lower pyramid
            else {
                for(int j = 1; j <= ((n-1-i)*2 + 1); j++)
                    printf("%d ", j);
                printf("\n");
            }
        }
    }

    return 0;
}
