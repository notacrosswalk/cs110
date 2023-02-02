// Write a function in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>
#include <stdlib.h>

int *merge(int *a1, int *a2, int n);

int main() 
{
    int a1[6] = {10, 1, 1, 1, 1, 1};
    int a2[6] = {7, 6, 5, 4, 3, 2};
    int *merged_array = merge(a1, a2, 6);
    printf("The merged array is:\n");
    for(int i=0; i<12; i++)
        printf("%d ", merged_array[i]);
    printf("\n");
    return 0;
}

int *merge(int *a1, int *a2, int n)
{
    int *result = (int *) malloc(2*n*sizeof(int));
    int i1 = 0, i2 = 0; // Indices
    for(int i=0; i<(2*n); i++)
    {
        if(i1 < n &&  i2 < n)
        {
            if(a1[i1] >= a2[i2])
            {
                result[i] = a1[i1];
                i1++;
            }
            else if(a1[i1] < a2[i2])
            {
                result[i] = a2[i2];
                i2++;
            }    
        }
        else if(i1 >= n)
        {
            result[i] = a2[i2];
            i2++;
        }
        else if(i2 >= n)
        {
            result[i] = a1[i1];
            i1++;
        }
        
    }
    return result;
}