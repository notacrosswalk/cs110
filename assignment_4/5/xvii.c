// 1
// 010
// 10101
// 0101010
// 10101
// 010
// 1

#include <stdio.h>

int main() {
    int n = 4;
    int c = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= i*2 + 1; j++) {
            printf("%d", c);
            if(c == 0)
                c = 1;
            else
                c = 0;
        }
        printf("\n");
    }
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 1; j <= i*2 + 1; j++) {
            printf("%d", c);
            if(c == 0)
                c = 1;
            else
                c = 0;
        }
        printf("\n");
    }
    return 0;
}