#include <stdio.h>

int main() {
    int a, b;
    a = 10, b = 20;
    int min = (a<b) ?a :b;
    printf("%d is the minimum of the two.\n", min);
    return 0;
}
