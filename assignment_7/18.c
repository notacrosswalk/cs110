// Write a function in C to find the transpose of a given matrix.

#include <stdio.h>
#include <stdlib.h>

int **transpose(int **a, int m, int n);

int main()
{
    // Input
    int m, n;
    printf("Enter the dimensions of the matrix:\n");
    scanf("%d %d", &m, &n);
    int **a = (int **) malloc(m*sizeof(int*)); 
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<m; i++)
    {
        a[i] = (int *) malloc(n*sizeof(int));
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Calling the multiply function
    int **result = transpose(a, m, n);
    // Printing the multiplied matrix
    printf("\nThe transpose of the matrix is:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t", result[i][j]);
        printf("\n");
    }
    return 0;
}

int **transpose(int **a, int m, int n)
{
    int **result = (int **) malloc(m*sizeof(int*));
    for(int i=0; i<m; i++)
    {
        result[i] = (int *) malloc(n*sizeof(int));
        for(int j=0; j<n; j++)
        {
            result[i][j] = a[j][i];
        }
    }
    return result;
}