#include <stdio.h>

char *toUpper(char *);

int main()
{
    int n;
    printf("Enter the length of the string.\n");
    scanf("%d", &n);
    
    char s[n+1];
    printf("Enter the string.\n");
    scanf("\n%[^\n]s", s);
    
    printf("\n%s", s);
    printf("\n%s\n", toUpper(s));
    
    return 0;
}

char *toUpper(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] += 'A' - 'a';
        i++;
    }
    return s;
}
