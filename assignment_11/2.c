#include <stdio.h>

#define MAX(x, y) (x>y) ?(x) :(y)

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", MAX(m, n));
    return 0;
}
