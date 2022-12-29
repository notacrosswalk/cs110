#include <stdio.h>
int main() {
    int n = 4; // Change the input here
    int i = n;
    while(i > 0) {
        int j = 0;
        while(j <= n - i) {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}