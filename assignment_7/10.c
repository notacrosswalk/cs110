// Write a program in C to separate odd and even integers
// stored in an array into two separate arrays.

#include <stdio.h>
#include <stdlib.h>

void separate(int *arr, int size);

int main() {
  int size;
  printf("Enter the size of the integer array.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  separate(arr, size);
  return 0;
}

void separate(int *arr, int size) {
  // Counting number of even elements
  int c = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0)
      c++;
  }
  // Separating the elements
  int *even = (int *)malloc(sizeof(int) * c);
  int *odd = (int *)malloc(sizeof(int) * (size - c));
  int e = 0, o = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0)
      even[e++] = arr[i];
    else
      odd[o++] = arr[i];
  }
  // Printing the new arrays
  for (int i = 0; i < c; i++) {
    if (i == 0)
      printf("\nThe new array with even elements is\n[");
    if (i != c - 1)
      printf("%d, ", even[i]);
    else
      printf("%d]\n", even[c - 1]);
  }

  for (int i = 0; i <= size - c - 1; i++) {
    if (i == 0)
      printf("\nThe new array with odd elements is\n[");
    if (i != size - c - 1)
      printf("%d, ", odd[i]);
    else
      printf("%d]\n", odd[size - c - 1]);
  }
  free(odd);
  free(even);
  free(arr);
  arr = NULL;
  odd = NULL;
  even = NULL;
}