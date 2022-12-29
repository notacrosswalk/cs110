/* Write a program in C to check whether a triangle is valid or not. 
   Consider all sides of the triangles as inputs. */

#include <stdio.h>
int main() {
   float a = 3, b = 4, c = 5.1;
   if((a*a <= (b*b+c*c)) && (b*b <= (c*c+a*a)) && (c*c <= (a*a+b*b))) {
      printf("Triangle with sides %f, %f and %f is valid. \n", a, b, c);
   }
   else {
      printf("Triangle with sides %f, %f and %f is invalid. \n", a, b, c);
   }
   return 0;
}