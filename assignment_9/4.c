#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of the int array.\n");
    int n;
    scanf("%d", &n);
    
    int *a = (int *) malloc(n*sizeof(int));
    printf("Enter the elements of the int array.\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", a+i);
    }
    
    printf("\nThe elements of the int array are\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
    
    char *b = (char *) a;
    n *= sizeof(int)/sizeof(char);
    
    printf("\nEnter %d char values.\n", n);
    fflush(stdin);
    for(int i=0; i<n; i++)
    {
        scanf("%c", b+i);
    }
    
    printf("\nThe elements of the char array are\n");
    for(int i=0; i<n; i++)
    {
        printf("%c ", *(b+i));
    }
    printf("\n");
    
    free(a);
    a = NULL;
    return 0;
}
