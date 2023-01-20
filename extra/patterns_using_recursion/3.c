//    *
//   **
//  ***
// ****

#include <stdio.h>

void printRow(int n, char c)
{
    if(n == 0) return;
    printf("%c", c);
    printRow(n-1, c);
}

void printPattern(int m, int n, char c)
{
    static int l = 1;
    if(n == 0) return;
    printRow(m - l, ' ');
    printRow(l++, c);
    printf("\n");
    printPattern(m, n-1, c);
}

int main() 
{
    int n = 4;
    printPattern(n, n, '*');
    return 0;
}