#define MAX 100

#include <stdio.h>
#include <stdlib.h>

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