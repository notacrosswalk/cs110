/* Write a function in C to check whether a number is Armstrong or 
not. If it is an Armstrong number, the function should return 1. 
Otherwise, it should return 0. Write the main function and call the 
function from the main function. You need to define the function 
after the main function and declare the function outside (before)
the main function. */

#include <stdio.h>
#include <math.h>

int isArmstrong(int n);

int main() {

  int number = 8208; // Change the input here

  int result = isArmstrong(number);

  if(result == 0)
    printf("%d is not an Armstrong number. \n", number);

  else
    printf("%d is an Armstrong number. \n", number);
  
  return 0;
}

int isArmstrong(int n) {
  int condition = 0;

  int n_copy = n;

  int sum = 0;

  int n_digits = 0;
  
  while(n_copy > 0) {

    n_digits++;
    
    n_copy /= 10;
  }

  n_copy = n;

  while(n_copy > 0) {

    int digit = n_copy%10;
    
    sum += pow(digit, n_digits);

    n_copy /= 10;
  }

  if (sum == n)
    condition = 1;
  
  return condition;
}