// ****
// ***
// **
// *
#include <stdio.h>

void printRow(int n)
{
    if (n == 0) return;
    printf("*");
    printRow(n-1);
}

void printPattern(int n)
{
    if (n == 0) return;
    printRow(n);
    printf("\n");
    printPattern(n-1);
}

int main()
{
    int n = 4;
    printPattern(n);
    return 0;
}
