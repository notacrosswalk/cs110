/* For this, consider n = 5 unlike others.
* 1
* 23
* 456
* 7890
* 12345 */

#include <stdio.h>

int main() {
    int n = 5; // Change the input here
    int i = 1;
    for(int j = 1; j <= n; j++) {
        for(int k = 1; k <= j; k++) {
            printf("%d", i++);
            if(i == 10)
                i = 0;
        }
        printf("\n");
    }
    return 0;
}