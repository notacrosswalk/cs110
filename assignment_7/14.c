// Write a function in C to find the second largest element in an array.

#include <stdio.h>
#include <stdlib.h>

void findSecondLargest(int *arr, int size);

int main() {
  int size;
  printf("Enter the size of the integer array.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  findSecondLargest(arr, size);
  return 0;
}

void findSecondLargest(int *arr, int size) {
  // Sorting the array in increasing order
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
  // Finding the second largest element
  int i;
  for (i = size - 1; i >= 0; i--) {
    if (arr[i] != arr[size - 1])
      break;
  }
  // Output
  printf("\n%d is the second largest element in the array.\n", arr[i]);
  free(arr);
  arr = NULL;
}