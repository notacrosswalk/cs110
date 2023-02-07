// Write a function in C to implement a linear search on an array.

#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *arr, int size, int query);

int main() {
  int size;
  printf("Enter the size of the integer array.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  int query;
  printf("Enter the search query.\n");
  scanf("%d", &query);
  int index = linearSearch(arr, size, query);
  if (index != -1)
    printf("\n%d has been found at index %d in the array.\n", query, index);
  else
    printf("\n%d has not been found in the array.\n", query);
  return 0;
}

int linearSearch(int *arr, int size, int query) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == query)
      return i;
  }
  return -1;
}