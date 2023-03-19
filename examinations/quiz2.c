#include <stdio.h>
#include <limits.h>

int f(int a[], int size)
{
    int max_length = INT_MIN;

    for(int i=0; i<size; i++)
    {
        int length = 1;
        int prev = a[i];

        for(int j=i+1; j<size; j++)
        {
            if(a[j] > prev)
            {
                length++;
                prev = a[j];
            }
            else
            {
                    break;
            }
        }

        if(max_length < length)
        {
            max_length = length;
        }
    }

    return max_length;
}

int main()
{
    int size;
    scanf("%d", &size);

    int a[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n%d\n", f(a, size));

    return 0;
}