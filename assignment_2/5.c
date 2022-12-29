#include <math.h>
#include <stdio.h>
int main(){
    float a=0, b=0, c=0;
    printf("Enter the lengths of the sides of the triangle. \n");
    scanf("%f %f %f", &a, &b, &c);
    float s = (a + b + c) / 2.0;
    float area = sqrtf((s * (s-a) * (s-b) * (s-c)));
    printf("Area = %f \n", area);
    return 0;
}
