// Write a function in C to check whether a given matrix is an identity matrix.

#include <stdio.h>
#include <stdlib.h>

int isIdentity(int **a, int n);

int main()
{
    // Input
    int n;
    printf("Enter the size of the square matrix:\n");
    scanf("%d", &n);
    int **a = (int **) malloc(n*sizeof(int*)); 
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<n; i++)
    {
        a[i] = (int *) malloc(n*sizeof(int));
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Output
    if(isIdentity(a, n))
        printf("It is an identity matrix of order %d.\n", n);
    else
        printf("It is not an identity matrix.\n");
    free(a);
    a = NULL;
    return 0;
}

int isIdentity(int **a, int n)
{
    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                if(a[i][j] != 1) return 0;
            }
            else 
            {
                if(a[i][j] != 0) return 0;    
            }
        }
    }
    return 1;
}