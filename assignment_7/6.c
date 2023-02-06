// Write a program in C to count the occurrences of odd numbers in an array.

#include <stdio.h>
#include <stdlib.h>

int oddOccurrences(int *arr, int size);

int main() {
  int n;
  printf("Enter the number of elements in the array:\n");
  scanf("%d", &n);
  int *a = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("There are %d occurrences of odd numbers in the array.\n",
         oddOccurrences(a, n));
  return 0;
}

int oddOccurrences(int *arr, int size) {
  int n;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2)
      n++;
  }
  free(arr);
  arr = NULL;
  return n;
}
