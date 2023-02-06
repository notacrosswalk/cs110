// Write a function in C for the addition of two matrices of the same size.

#include <stdio.h>
#include <stdlib.h>

int **add(int **a, int **b, int m, int n);

int main()
{
    // Input
    int m, n;
    printf("Enter the size of the matrices:\n");
    scanf("%d %d", &m, &n);
    int **a = (int **) malloc(m*sizeof(int*)); 
    int **b = (int **) malloc(m*sizeof(int*));
    printf("Enter the elements of the first matrix:\n");
    for(int i=0; i<m; i++)
    {
        a[i] = (int *) malloc(n*sizeof(int));
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(int i=0; i<n; i++)
    {
        b[i] = (int *) malloc(n*sizeof(int));
        for(int j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // Calling the add function
    int **result = add(a, b, m, n);
    // Printing the resultant matrix
    printf("\nThe result of the addition is:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
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

int **add(int **a, int **b, int m, int n)
{
    int **result = (int **) malloc(m*sizeof(int*));
    for(int i=0; i<m; i++)
    {
        result[i] = (int *) malloc(n*sizeof(int));
        for(int j=0; j<n; j++)
            result[i][j] = a[i][j] + b[i][j];
    }
    return result;
}