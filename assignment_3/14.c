/* Write a program in C to check whether a triangle is an equilateral, 
isosceles, or scalene triangle. Consider all sides of the triangles as inputs.*/

#include <stdio.h>
int main() {
    float a = 4, b = 4, c = 3;
    if (a == b && b == c) {
        printf("Triangle with sides %f, %f and %f is equilateral. \n", a, b, c);
    }
    else if (a == b || b == c || c == a) {
        printf("Triangle with sides %f, %f and %f is isosceles. \n", a, b, c);
    }
    else {
        printf("Triangle with sides %f, %f and %f is scalene. \n", a, b, c);
    }
    return 0;
}