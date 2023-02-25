#include <stdio.h>

void swap(char *, int, int);

void reverse(char *, int);

int main()
{
    int n;
    scanf("%d", &n);
    
    char s[n+1];
    scanf("\n%[^\n]s", s);
    
    printf("\n%s", s);
    
    reverse(s, n);
    
    printf("\n%s\n", s); 
    
    return 0;
}

void swap(char *s, int i, int j)
{
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

void reverse(char *s, int n)
{

    for(int i=0; i < n/2; i++)
    {
        swap(s, i, n-i-1);
    }
}
