#include <stdio.h>
#include <string.h>

void concatenate();

void compare();

void findLength();

void copy();

int main()
{

    do
    {
        printf("********* MENU *********\n");
        printf("Working with strings\n");
        printf("1 - Concatenate\n");
        printf("2 - Compare\n");
        printf("3 - Find length\n");
        printf("4 - Copy string\n");
        printf("exit - quit the program\n");
        printf("\nSelect an option to continue.\n");
        
        char c[5];
        scanf("%s", c);
        
        if(!strcmp(c, "1"))
        {
            concatenate();
        }
        else if(!strcmp(c, "2"))
        {
            compare();
        }
        else if(!strcmp(c, "3"))
        {
            findLength();
        }
        else if(!strcmp(c, "4"))
        {
            copy();
        }
        else if(!strcmp(c, "exit"))
        {
            printf("\nWe hope to see you again!\n");
            break;
        }
        else
        {
            printf("Invalid input!\n\n\");
        }
        
    } while();
    return 0;
}
