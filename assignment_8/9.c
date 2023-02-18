#include <stdio.h>
#include <stdlib.h>

void swap(int *, int, int);

void permutate(int a[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        int j = rand()%(size-i);
        swap(a, i, i+j);
    }
}

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main()
{
    int n;
    printf("Enter the array size.\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array elements.\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    permutate(a, n);

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
