// Write a function in C to count a total number of duplicate
// elements in an array.

#include <stdio.h>
#include <stdlib.h>

int numberOfDuplicates(int *arr, int size) {
  int *flag = (int *)calloc(size, sizeof(int));
  int n = 0;
  for (int i = 0; i < size; i++) {
    if (!flag[i]) {
      int c = 0;
      for (int j = i + 1; j < size; j++) {
        if (arr[i] == arr[j] && !flag[j]) {
          flag[j] = 1;
          flag[i] = flag[j];
          if (c++ == 0) n++;
        }
      }
    }
  }
  return n;
}

int main() {
  int n;
  printf("Enter the number of elements in the array:\n");
  scanf("%d", &n);
  int *a = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int n_duplicates = numberOfDuplicates(a, n);
  printf("There are %d duplicates in the array.\n", n_duplicates);
  return 0;
}