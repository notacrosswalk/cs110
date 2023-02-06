// Write a function in C to delete an element at the desired position from an
// array, considering it a list.

#include <stdio.h>
#include <stdlib.h>

int *del(int *arr, int size, int index);

int main() {
  int size;
  printf("Enter the size of the integer array.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  int index;
  printf("Enter the index where the element is to be deleted.\n");
  scanf("%d", &index);
  int *narr = del(arr, size, index);
  // Printing the new array
  printf("\nThe array after the element has been deleted is:\n");
  for (int i = 0; i < size - 1; i++)
    printf("%d\n", narr[i]);
  free(arr);
  free(narr);
  arr = NULL;
  narr = NULL;
  return 0;
}

int *del(int *arr, int size, int index) {
  int *narr = (int *)malloc((size - 1) * sizeof(int));
  int j = 0;
  for (int i = 0; i < size; i++) {
    if (i == index)
      continue;
    else
      narr[j++] = arr[i];
  }
  return narr;
}
