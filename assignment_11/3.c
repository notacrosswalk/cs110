#include <stdio.h>

#define PRINT printf("%s %s %s %s %d\n", __FILE__, __DATE__, __TIME__, __func__, __LINE__)

int main()
{
    PRINT;
    return 0;
}
