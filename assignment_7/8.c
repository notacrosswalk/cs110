// Write a function in C to merge two arrays of the same size sorted in
// descending order.

#include <stdio.h>
#include <stdlib.h>

int *merge(int *a1, int *a2, int size);

int main() {
  int a1[6] = {10, 1, 1, 1, 1, 1};
  int a2[6] = {7, 6, 5, 4, 3, 2};
  int *merged_array = merge(a1, a2, 6);
  printf("The merged array is:\n");
  for (int i = 0; i < 12; i++)
    printf("%d ", merged_array[i]);
  printf("\n");
  free(merged_array);
  merged_array = NULL;
  return 0;
}

int *merge(int *a1, int *a2, int size) {
  int *result = (int *)malloc(2 * size * sizeof(int));
  int i1 = 0, i2 = 0; // Indices
  for (int i = 0; i < (2 * size); i++) {
    if (i1 < size && i2 < size) {
      if (a1[i1] >= a2[i2]) {
        result[i] = a1[i1];
        i1++;
      } else if (a1[i1] < a2[i2]) {
        result[i] = a2[i2];
        i2++;
      }
    } else if (i1 >= size) {
      result[i] = a2[i2];
      i2++;
    } else if (i2 >= size) {
      result[i] = a1[i1];
      i1++;
    }
  }
  return result;
}