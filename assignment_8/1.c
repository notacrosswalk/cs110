#include <stdio.h>
#include <stdlib.h>

int f(int *arr, int n, int x)
{
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
             if(++c > n/2) return 1;
        }
    }
    return 0;
}

int main() 
{
    printf("Enter the size of the array.\n");
    int n;
    scanf("%d", &n);
    int *arr = (int *) malloc(n*sizeof(int));
    printf("Enter the elements of the array.\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the integer to search for.\n");
    int x;
    scanf("%d", &x);
    int r = f(arr, n, x);
    if(!r) printf("\n%d does not appear more than n/2 times in the array.\n", x);
    else printf("\n%d appears more than n/2 times in the array.\n", x);
    free(arr);
    arr = NULL;
    return 0;
}
