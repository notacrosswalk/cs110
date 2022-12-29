/*
* ?
* ??
* ???
* ????
*/

#include <stdio.h>

int main() {
    int i = 0;
    while(i < 4) {
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