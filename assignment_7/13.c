// Write a function in C to add a new value in a sorted array. After the
// operation, the modified array needs to be sorted.

#include <stdio.h>
#include <stdlib.h>

int *addAndSort(int *arr, int size, int element);

int main() {
  int size;
  printf("Enter the size of the integer array sorted in increasing order.\n");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the sorted integer array.\n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  int element;
  printf("Enter the element to be added.\n");
  scanf("%d", &element);
  int *narr = addAndSort(arr, size, element);
  // Printing the new array
  printf("\nThe sorted array after the element has been added is:\n");
  for (int i = 0; i < size + 1; i++)
    printf("%d\n", narr[i]);
  free(arr);
  free(narr);
  arr = NULL;
  narr = NULL;
  return 0;
}

int *addAndSort(int *arr, int size, int element) {
  int *narr = (int *)malloc((size + 1) * sizeof(int));
  // Adding the element
  for (int i = 0; i < size; i++) {
    narr[i] = arr[i];
  }
  narr[size] = element;
  // Sorting the array in increasing order
  for (int i = 0; i <= size; i++) {
    int min = i;
    for (int j = i + 1; j <= size; j++) {
      if (narr[j] < narr[min])
        min = j;
    }
    int temp = narr[min];
    narr[min] = narr[i];
    narr[i] = temp;
  }
  return narr;
}