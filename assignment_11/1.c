#include <stdio.h>

#define F(x) (x >= 'a' && x <= 'z') ?1 :0

int main()
{
    char n;
    scanf("%c", &n);
    printf("%d\n", F(n));
    return 0;
}
