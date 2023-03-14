#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb");
    FILE *dest = fopen(argv[2], "wb");

    while(1)
    {
        char c = fgetc(src);
        if(c == EOF) break;
        fputc(c, dest);
    }

    fclose(src);
    fclose(dest);

    return 0;
}