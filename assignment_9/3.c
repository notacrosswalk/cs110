#include <stdio.h>

int main()
{
    int a[5];
    
    printf("Enter 5 integers.\n");
    for(int i=0; i<5; i++)
        scanf("%d", &a[i]);
    
    printf("The elements of the array are:\n");
    for(int i=0; i<5; i++)
        printf("%d", a[i]);
    
    printf("\n");
    
    
    return 0;
}
