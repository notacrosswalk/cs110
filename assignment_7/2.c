// Write a function in C to find the sum of all array elements.

#include <stdio.h>
#include <stdlib.h>

double sumOfArrayElements(double *arr, int size) 
{
    double sum = 0;
    for(int i=0; i<size; i++)
        sum += arr[i];
    return sum;
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
    double sum = sumOfArrayElements(arr, size);
    printf("%lf is the sum of all the elements of the array.\n", sum);
    return 0;
}