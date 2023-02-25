#include <stdio.h>
#include <string.h>

void concatenate();

int compare();

int findLength();

void copy();

int main()
{

    do
    {
        printf("********* MENU *********\n");
        printf("Working with strings\n");
        printf("1 - Concatenate\n");
        printf("2 - Compare\n");
        printf("3 - Find length\n");
        printf("4 - Copy string\n");
        printf("exit - quit the program\n");
        printf("\nSelect an option to continue.\n");
        
        char c[5];
        scanf("%s", c);
        
        if(!strcmp(c, "1"))
        {
            concatenate();
        }
        else if(!strcmp(c, "2"))
        {
            printf("%d\n\n", compare());
        }
        else if(!strcmp(c, "3"))
        {
            printf("%d\n\n", findLength());
        }
        else if(!strcmp(c, "4"))
        {
            copy();
        }
        else if(!strcmp(c, "exit"))
        {
            printf("\nWe hope to see you again!\n");
            break;
        }
        else
        {
            printf("Invalid input!\n\n");
        }
        
    } while(1);
    return 0;
}

void concatenate()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    char s1[n1+1], s2[n2+1];
    
    scanf("\n%[^\n]s", s1);
    scanf("\n%[^\n]s", s2);
    
    char s3[n1+n2+1];
    int j=0;
    for(int i=0; i<n1+n2; i++)
    {
        if(j < n1)
        {
            s3[i] = s1[j];
            j++;
        }
        else if(j >= n1)
        {
            s3[i] = s2[j-n1];
            j++;
        }
    }
    s3[n1+n2] = '\0';
    
    printf("\n%s\n\n", s3);
}

int compare()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    char s1[n1+1], s2[n2+1];
    scanf("\n%[^\n]s", s1);
    scanf("\n%[^\n]s", s2);
    
    for(int i=0; i <= n1 && i <= n2; i++)
    {
        if(s1[i] - s2[i]) return s1[i] - s2[i];
    }
    
    return 0;
}

int findLength()
{
    int n;
    scanf("%d", &n);
    
    char s[n+1];
    scanf("\n%[^\n]s", s);
    
    int i=0;
    while(s[i] != '\0') i++;
    
    return i;
}

void copy()
{
    int n;
    scanf("%d", &n);
    
    char s[n+1];
    scanf("\n%[^\n]s", s);
    
    char c[n+1];
    for(int i=0; i<=n+1; i++)
    {
        c[i] = s[i];
    }
    
    printf("\n%s\n\n", c);
}
