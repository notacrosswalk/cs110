// Write a function in C for the multiplication of two matrices.

#include <stdio.h>
#include <stdlib.h>

int **multiply(int **a, int **b, int m, int p, int n);

int main() {
  // Input
  int m, p, n;
  printf("Enter the dimensions of the first matrix:\n");
  scanf("%d %d", &m, &p);
  printf("Enter the number of columns in the second matrix:\n");
  scanf("%d", &n);
  int **a = (int **)malloc(m * sizeof(int *));
  int **b = (int **)malloc(p * sizeof(int *));
  printf("Enter the elements of the first matrix:\n");
  for (int i = 0; i < m; i++) {
    a[i] = (int *)malloc(p * sizeof(int));
    for (int j = 0; j < p; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter the elements of the second matrix:\n");
  for (int i = 0; i < p; i++) {
    b[i] = (int *)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
    }
  }
  // Calling the multiply function
  int **result = multiply(a, b, m, p, n);
  // Printing the multiplied matrix
  printf("\nThe result of the multiplication is:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      printf("%d\t", result[i][j]);
    printf("\n");
  }
  free(a);
  free(b);
  free(result);
  a = NULL;
  b = NULL;
  result = NULL;
  return 0;
}

int **multiply(int **a, int **b, int m, int p, int n) {
  int **result = (int **)malloc(m * sizeof(int *));
  for (int i = 0; i < m; i++) {
    result[i] = (int *)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
      int dot_product = 0;
      for (int k = 0; k < p; k++)
        dot_product += a[i][k] * b[k][j];
      result[i][j] = dot_product;
    }
  }
  return result;
}