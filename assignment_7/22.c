// Write a program in C to find all subarrays
// with a given sum from a given array.

#include <stdio.h>
#include <stdlib.h>

void findSubarrays(int *arr, int size, int sum);

int main() {
  int size;
  printf("Enter the size of the integer array.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  int sum;
  printf("Enter the required sum.\n");
  scanf("%d", &sum);
  printf("\nThe subarrays whose sum equals %d are\n", sum);
  findSubarrays(arr, size, sum);
  return 0;
}

void findSubarrays(int *arr, int size, int sum) {
  for (int i = 0; i < size; i++) {
    int subarray_sum = arr[i];
    for (int j = i + 1; j < size; j++) {
      subarray_sum += arr[j];
      if (subarray_sum == sum) {
        // Printing the subarray
        printf("[");
        for (int k = i; k < j; k++)
          printf("%d, ", arr[k]);
        printf("%d]\n", arr[j]);
      }
    }
  }
}