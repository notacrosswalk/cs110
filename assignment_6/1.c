/* Write a function in C to compute the area of a circle. You must pass the circle’s
diameter as a parameter to the function. Write the main function and call it from the
main function. You need to define the function before the main function. */

#include <math.h>
#include <stdio.h>

float area(float d);

int main() {
  
  float diameter = 2.0;
  
  float a = area(diameter);
  
  printf("Area of the circle with diameter %f is %f.\n", diameter, a);
  
  return 0;
}

float area(float d) {
  float result = M_PI*(d/2.0)*(d/2.0);
  return result;
}