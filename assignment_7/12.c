// Write a function in C to add an element at the desired
// position of an array, considering it a list.

#include <stdio.h>
#include <stdlib.h>

int *add(int *arr, int size, int index, int element);

int main() {
  int size;
  printf("Enter the size of the integer array.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  int index;
  printf("Enter the index where the element is to be added.\n");
  scanf("%d", &index);
  int element;
  printf("Enter the element to be added.\n");
  scanf("%d", &element);
  int *narr = add(arr, size, index, element);
  // Printing the new array
  printf("\nThe array after the element has been added is:\n");
  for (int i = 0; i < size + 1; i++)
    printf("%d\n", narr[i]);
  return 0;
}

int *add(int *arr, int size, int index, int element) {
  int *narr = (int *)malloc((size + 1) * sizeof(int));
  int j = 0;
  for (int i = 0; i < size + 1; i++) {
    if (i == index)
      narr[i] = element;
    else
      narr[i] = arr[j++];
  }
  return narr;
}