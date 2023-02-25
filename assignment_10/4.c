#include <stdio.h>
#include <string.h>

void isPalindrome(char *, int);

int main()
{
    int n;
    scanf("%d", &n);
    
    char s[n+1];
    scanf("\n%[^\n]s", s);
    
    isPalindrome(s, n);
    
    return 0;
}

void isPalindrome(char *s, int n)
{

    for(int i=0; i < n/2; i++)
    {
        if(s[i] != s[n-i-1]) 
        {
            printf("Not a palindrome.\n"); 
            return;
        }
    }
    printf("It is a palindrome.\n");
}
