#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the string you want to input.\n");
    scanf("%d", &n);
    
    char str[n+1];
    printf("Enter the string.\n");
    fflush(stdin);
    // scanf("\n%[^\n]s", str); // Because fflush(stdin) does not work on the institute server
    scanf("%[^\n]s", str);
    
    void print(char[]);
    
    print(str); 

    return 0;
}

void print(char str[])
{
    for(int i=0; str[i] != '\0'; i++)
    {
        printf("%p ", &str[i]);
    }
    printf("\n");
}
