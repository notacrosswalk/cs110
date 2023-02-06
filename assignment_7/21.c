// Write a program in C to find a pair of elements in an array of int,
// such that, the sum of these elements is equal to a given number.

#include <stdio.h>
#include <stdlib.h>

void findPair(int *arr, int size, int sum);

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
  findPair(arr, size, sum);
  return 0;
}

void findPair(int *arr, int size, int sum) {
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == sum) {
        printf("The sum of %d (at index %d) and %d (at index %d) = %d.\n",
               arr[i], i, arr[j], j, sum);
        return;
      }
    }
  }
  printf("No two elements whose sum equals %d have been found.\n", sum);
}