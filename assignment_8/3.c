// Write a function in C to implement binary search on a sorted array.

#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *arr, int size, int query);

int main() {
  int size;
  printf("Enter the size of the integer array sorted in increasing order.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the sorted integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  int query;
  printf("Enter the search query.\n");
  scanf("%d", &query);
  int index = binarySearch(arr, size, query);
  if (index != -1)
    printf("\n%d has been found at index %d in the array.\n", query, index);
  else
    printf("\n%d has not been found in the array.\n", query);
  free(arr);
  arr = NULL;
  return 0;
}

int binarySearch(int *arr, int size, int query) {
  int start = 0, end = size - 1;
  while (start <= end) {
    int mid = (start + end) / 2;
    if (query < arr[mid])
      end = mid - 1;
    else if (query > arr[mid])
      start = mid + 1;
    else
      return mid;
  }
  return -1;
}
