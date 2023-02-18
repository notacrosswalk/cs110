#include <stdio.h>

void swap(int *, int, int);

void move(int a[], int size)
{
    int c = 1;
    for(int i=0; i<size-1; i++)
    {
        if(i+c == size) break;
        if(a[i] == 0)
        {
            while(a[size-c] == 0)
            {
                c++;
            }
            swap(a, i, size-c);
        }
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

    move(a, n);

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
