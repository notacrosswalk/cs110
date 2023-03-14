#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "r");
    FILE *dest = fopen(argv[2], "w");

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