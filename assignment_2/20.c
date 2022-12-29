#include <stdio.h>

int main() {
    int a, b;
    a = 10, b = 20;
    int max = (a>b) ?a :b;
    printf("%d is the maximum of the two. \n", max);
    return 0;
}
