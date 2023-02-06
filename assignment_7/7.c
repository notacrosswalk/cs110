// Write a function in C to print all unique elements in an array.

#include <stdio.h>
#include <stdlib.h>

void printUnique(int *arr, int size) {
  int *flag = (int *)calloc(size, sizeof(int));
  for (int i = 0; i < size; i++) {
    if (!flag[i]) {
      int c = 0;
      for (int j = i + 1; j < size; j++) {
        if (arr[i] == arr[j] && !flag[j]) {
          flag[j] = 1;
          flag[i] = 1;
          if (c++ == 0)
            printf("%d\n", arr[i]);
        }
      }
      if (!c)
        printf("%d\n", arr[i]);
    }
  }
  free(arr);
  arr = NULL;
  free(flag);
  flag = NULL;
}

int main() {
  int n;
  printf("Enter the number of elements in the array:\n");
  scanf("%d", &n);
  int *a = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printUnique(a, n);
  return 0;
}