#include <math.h>
#include <stdio.h>

int main() {
    int n = 4; float x = 2; // Change the input here
    float s = 0.0;
    int m = 1;
    for(int i = 0; i < n; i++) {
        float f = 1; 
        int j = 1;
        while(j <= (i*2 + 1)) {
            f *= j;
            j++;
        }
        s += m*pow(x, (i*2 + 1))/f;
        m *= -1;
    }
    printf("%f\n", s);
    return 0;
}