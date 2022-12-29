#include <math.h>
#include <stdio.h>
int main() {
    float a = 1, b = -4, c = 4;
    float d = sqrt((pow(b, 2) - (4*a*c)));
    float x1 = (-b + d)/(2*a);
    float x2 = (-b - d)/(2*a);
    printf("The roots of the equation are %f and %f. \n", x1, x2);
    return 0;
}
