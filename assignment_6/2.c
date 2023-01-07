/* Write a function in C to check whether a number is prime or not. If it is a prime
number, the function should return 1. Otherwise, it should return 0. Write the
main function and call the function from the main function. You need to define the
function after the main function and declare the function inside the main function. */

#include <math.h>
#include <stdio.h>

int isPrime(int n) {
  int condition = 1;
  for(int i = 2; i<= sqrt(n); i++) {
    if(n%i == 0) {
      c = 0;
      break;
    }
  }
  return 
}