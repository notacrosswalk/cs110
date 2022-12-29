/* Write a program in C to find the least common multiple (LCM) of two 
numbers.*/

#include <stdio.h>

int main() {
    int n_1 = 9, n_2 = 8; // Change the inputs here
    int lcm = 0;
    for(int i = n_1; i > 0; i += n_1) {
        if(i%n_2 == 0) {
            lcm = i;
            break;
        }
    }
    printf("The LCM of %d and %d is %d.\n", n_1, n_2, lcm);
    return 0;
}