// Write a program in C to find the minimum element in an array.

#include <stdio.h>

double minimumInArray(double *arr, int size) 
{
    double min = arr[0];
    for(int i=0; i<size; i++)
    {
        
    }
}

int main() {
    printf("Enter the size of the array:\t");
    int size;
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    int arr[size];
    for(int i=0; i<size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    reversedArray(arr, size);
    return 0;
}