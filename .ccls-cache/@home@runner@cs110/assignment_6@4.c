/* Write a function in C to print all prime numbers 
inside a given range [a, b]. You need to pass a and 
b as parameters to the function. */

#include <stdio.h>
#include <math.h>

void primeInRange(int a, int b);

int main() {

	int x = 0, y = 100; // Change the inputs here

  	primeInRange(x, y);
  
	return 0;
}

void primeInRange(int a, int b) {
	
	printf("The prime numbers in the range [%d, %d] are ", a, b);
	for(int i = a; i <= b; i++) {
		
		int isPrime = 1;
		for(int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1)
			printf("%d ", i);
		
	}

  printf("\n");
	
}