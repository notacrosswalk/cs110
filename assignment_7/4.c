// Write a function in C to copy the elements of one array into another array.

#include <stdio.h>
#include <stdlib.h>

void copy(int size, int *arr1, int *arr2) {
  for (int i = 1; i < size; i++) {
    arr2[i] = arr1[i];
  }
  free(arr1);
  arr1 = NULL;
  free(arr2);
  arr2 = NULL;
}

int main() {
  printf("Enter the size of the array:\t");
  int size;
  scanf("%d", &size);
  printf("Enter the elements of the array:\n");
  int *arr1 = (int *)malloc(size * sizeof(int)),
      *arr2 = (int *)malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr1[i]);
  }
  copy(size, arr1, arr2);
  return 0;
}