// Write a function in C to implement selection sort.

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *, int);

int main() {
  int size;
  printf("Enter the size of the integer array.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  selection_sort(arr, size);
  // Printing the sorted array
  printf("\nThe sorted array is:\n");
  for (int i = 0; i < size; i++)
    printf("%d\n", arr[i]);
  free(arr);
  arr = NULL;
}

void selection_sort(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    int min = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min])
        min = j;
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}