// Write a program in C to find the sum of rows and columns of a matrix.

#include <stdio.h>
#include <stdlib.h>

void sum(int **a, int m, int n);

int main() {
  // Input
  int m, n;
  printf("Enter the dimensions of the matrix:\n");
  scanf("%d %d", &m, &n);
  int **a = (int **)malloc(m * sizeof(int *));
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < m; i++) {
    a[i] = (int *)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  // Calling the sum function
  sum(a, m, n);
  return 0;
}

void sum(int **a, int m, int n) {
  // Sum of rows
  printf("\n\n");
  for (int i = 0; i < m; i++) {
    int sum = 0;
    for (int j = 0; j < n; j++)
      sum += a[i][j];
    printf("Row Sum %d = %d\n", i+1, sum);
  }
  printf("\n\n");
  // Sum of columns
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < m; j++)
      sum += a[j][i];
    printf("Column Sum %d = %d\n", i+1, sum);
  }

  free(a);
  a = NULL;
}