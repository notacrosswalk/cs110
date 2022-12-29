#include <stdio.h>

int main() {
    int n = 4; float x = 2; // Change the input here
    float s_1 = 1.0;
    for(int i = 1; i < n; i++) {
        int f = 1, j = 1;
        while(j <= i) {
            f *= j;
            j++;
        }
        s_1 += (1.0/f)*x;
        x *= x;
    }
    printf("%f\n",s_1);
    return 0;
}