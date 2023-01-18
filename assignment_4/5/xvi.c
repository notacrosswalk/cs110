// <<<<(      )   >
// <<< ((    ))  >>
// <<  (((  ))) >>>
// <   (((())))>>>>

#include <stdio.h>

int main() {
    int n = 4;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) 
            printf("<");
        for(int j = i; j > 0; j--)
            printf(" ");
        for(int j = i; j >= 0; j--)
            printf("(");
        for(int j = 2*i; j < 2*(n - 1); j++)
            printf(" ");
        for(int j = i; j >= 0; j--)
            printf(")");
        for(int j = i; j < n-1; j++)
            printf(" ");
        for(int j = i; j >= 0; j--)
            printf(">");
        printf("\n");
    }

    return 0;
}