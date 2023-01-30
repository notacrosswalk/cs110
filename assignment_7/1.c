// Write a program in C to read n int values in an array and display it in reverse order.

#include <stdio.h>

void reversedArray(int *arr, int size) 
{
    printf("The array in reverse order:\n");
    for(int i=size-1; i>-1; i--)
        printf("%d\n", arr[i]);
}

int main() {
    printf("Enter the size of the array:\t");
    int size;
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    // int *p = (int *) calloc(n, sizeof(int));
    
    // char *c = (char *) p; // This is valid
    int arr[size];
    for(int i=0; i<size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    reversedArray(arr, size);
    return 0;
}