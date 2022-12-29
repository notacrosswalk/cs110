#include <stdio.h>
int main(){
    float l=0, b=0;
    printf("Enter the length and the breadth. \n");
    scanf("%f %f", &l, &b);
    float area = l * b;
    printf("Area = %f \n", area);
    return 0;
}
