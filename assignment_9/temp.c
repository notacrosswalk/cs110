// This is an attempt to free dynamically allocated memory used to store a matrix.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Creating the matrix
    int m = 10, n = 10;
    int **a = (int **) malloc(m*sizeof(int *));
    for(int i=0; i<m; i++)
    {
        a[i] = (int *) malloc(n*sizeof(int));
    }
    
    // Freeing the memory
    for(int i=0; i<m; i++)
    {
        free(a[i]);
        a[i] = NULL;   
    }
    free(a);
    a = NULL;
    return 0;
}
