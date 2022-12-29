/*
* ?
* ??
* ???
* ????
*/

#include <stdio.h>

int main() {
    int n = 4; // Change the input here
    int i = 0;
    while(i < n) {
        int j = 0;
        while (j <= i) {
            printf("?");
            ++j;
        }
        printf("\n");
        ++i;
    }
    return 0;
}