#include <stdio.h>

int main()
{
    int n1;
    printf("Enter the size of the first array.\n");
    scanf("%d", &n1);
    
    int a1[n];
    printf("Enter the elements of the first array.\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a1[i]);
    }
    
    int n2;
    printf("Enter the size of the second array.\n);
    scanf("%d", &n2);
    
    int a2[n2];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a2[i]);
    }
    
    
    return 0;
}
