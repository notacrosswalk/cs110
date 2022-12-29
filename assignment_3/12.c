/* Write a program in C to check whether a triangle is valid or not. 
Consider all angles of the triangles as inputs.*/

#include <stdio.h>
int main() {
    float a = 91, b = 30, c = 60; //In degrees
    if (a + b + c == 180.0) {
        printf("The triangle is valid. \n");
    }
    else {
        printf("The triangle is invalid. \n");
    }
    return 0;
}