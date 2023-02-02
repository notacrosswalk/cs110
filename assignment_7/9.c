// Write a program in C to count the frequency of each element of an array.

#include <stdio.h>
#include <stdlib.h>

void countFrequency(int *arr, int size)
{
    printf("Element : Frequency\n");
    int *visit = (int *) calloc(size, sizeof(int));
    for(int i=0; i<size; i++)
    {
        if(visit[i] == -1) continue;
        int c = 1;
        visit[i] = -1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                visit[j] = -1;
                c++;
            }
        }
        printf("%d : %d\n", arr[i], c);
    }
}

int main() 
{
    printf("Enter the size of the array:\n");
    int size;
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    int *arr = (int *) malloc(sizeof(int)*size);
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);
    countFrequency(arr, size);
    return 0;
}