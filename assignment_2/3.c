#include <stdio.h>
#include <math.h>
int main(){
    float radius=0;
    printf("Enter the radius. \n");
    scanf("%f", &radius);
    float area = M_PI * radius * radius;
    printf("Area = %f \n", area);
    return 0;
}
