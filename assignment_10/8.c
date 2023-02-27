#define MAX 100

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void sort(char **, int);

int main()
{
    int n;
    scanf("%d", &n);

    char **p = (char **) calloc(n, sizeof(char *));

    for(int i=0; i<n; i++)
    {
        p[i] = (char *) calloc(MAX, sizeof(char));
        fflush(stdin);
        scanf("%[^\n]s", p[i]);
    }

    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%s\n", p[i]);
        free(p[i]);
        p[i] = NULL;
    }
    free(p);
    p = NULL;
}

void sort(char **p, int n)
{
    for(int i=0; i<n; i++)
    {
        int min = 0;
        for(int j = 0; j < n; j++)
        {
            
        }
    }
}