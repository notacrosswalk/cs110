#include <stdio.h>

int main() {
    int n = 4; // Change the input here
    float f = 1.0;
    float s_1 = 0.0;
    for(int i = 1; i <= n; i++) {
        s_1 += (1.0/i)*f;
        f *= -1;
    }
    printf("%f\n",s_1);
    return 0;
}