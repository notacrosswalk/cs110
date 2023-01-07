/* Realize the following program (line numbers are 
at the right of each statement as comments 
for better understanding): */

#include <stdio.h> // 01
// 02
int x = 1; // 03
// 04
void f(); // 05
// 06
int main() { // 07
printf("x = %d, &x = %p\n", x, &x); // 08
//printf("i = %d, &i = %p\n", i, &i); /* error: 'i' undeclared */ // 09
int i = 2; // 10
printf("i = %d, &i = %p\n", i, &i); // 11
{ // 12
int i = 3, j = 4; // 13
printf("i = %d, &i = %p\n", i, &i); // 14
printf("j = %d, &j = %p\n", j, &j); // 15
} // 16
// 17
for (int k = 1; k < 2; k++) // 18
printf("k = %d, &k = %p\n", k, &k); // 19
// 20
printf("i = %d, &i = %p\n", i, &i); // 21
//printf("j = %d, &j = %p\n", j, &j); /* error: 'j' undeclared */ // 22
//printf("y = %d, &y = %p\n", y, &y); /* error: 'y' undeclared */ // 23
// 24
f(); // 25
// 26
for (int k = 1; k < 3; k++) // 27
printf("k = %d, &k = %p\n", k, &k); // 28
//printf("k = %d, &k = %p\n", k, &k); /* error: 'k' undeclared */ // 29
// 30
return 0; // 31
} // 32
// 33
int y = 5; // 34
// 35
void f() { // 36
printf("x = %d, &x = %p\n", x, &x); // 37
printf("y = %d, &y = %p\n", y, &y); // 38
//printf("i = %d, &i = %p\n", i, &i); /* error: 'i' undeclared */ // 39
} // 40