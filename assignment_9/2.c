#include <stdio.h>

void swap(int *, int *);

int main()
{
    int m = 5;
    int n = 3;
    printf("m = %d\tn = %d\n", m, n);
    swap(&m, &n);
    printf("m = %d\tn = %d\n", m, n);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
