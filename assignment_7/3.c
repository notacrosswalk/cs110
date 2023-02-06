// Write a program in C to find the minimum element in an array.

#include <stdio.h>
#include <stdlib.h>

double minimumInArray(double *arr, int size) 
{
    double min = arr[0];
    for(int i=1; i<size; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}

int main() {
    printf("Enter the size of the array:\t");
    int size;
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    double *arr = (double *) malloc(size*sizeof(double)); 
    for(int i=0; i<size; i++) 
    {
        scanf("%lf", &arr[i]);
    }
    double min = minimumInArray(arr, size);
    printf("Minimum element in the array: %lf\n", min);
    free(arr);
    arr = NULL;
    return 0;
}