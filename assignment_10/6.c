#include <stdio.h>
#include <string.h>

void reverse(char *, char *, int);

int main()
{
    int n;
    scanf("%d", &n);

    char s[n+1];
    char r[n+1];
    scanf("\n%[^\n]s", s);

    reverse(s, r, n);

    printf("\n%s\n", r);

    return 0;
}

void reverse(char *s, char *r, int n)
{
    int start = 0;

    for(int i = 0; i <= n; i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            for(int j=start; j<i; j++)
            {
                r[j] = s[end-j-1];
            }
            r[end] = s[end];
            start = end + 1;
        }
    }
    for(int i=0; i<n/2; i++)
    {
        char temp = r[i];
        r[i] = r[n-i-1];
        r[n-i-1] = temp;
    }
}
