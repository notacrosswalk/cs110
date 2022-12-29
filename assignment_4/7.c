/* A cricket match is going on. The first five overs are done. 
The runs accumulated in these five overs are stored in 
five integers variables: r1, r2, r3, r4, and r5. Write a
program in C to print a horizontal bar chart to show runs per over. 
If the values of these five variables are, respectively, 4, 2, 0, 10, 7, 
the chart needs to be as follows.
Over 1: ####
Over 2: ##
Over 3:
Over 4: ##########
Over 5: ####### */

#include <stdio.h>

int main() {
    int r1 = 4, r2 = 2, r3= 0, r4 = 10, r5 = 7; // Change the inputs here
    // For r1
    printf("Over 1: ");
    for(int i = 1; i <= r1; i++)
        printf("#");
    printf("\n");
    // For r2
    printf("Over 2: ");
    for(int i = 1; i <= r2; i++)
        printf("#");
    printf("\n");
    // For r3
    printf("Over 3: ");
    for(int i = 1; i <= r3; i++)
        printf("#");
    printf("\n");
    // For r4
    printf("Over 4: ");
    for(int i = 1; i <= r4; i++)
        printf("#");
    printf("\n");
    // For r5
    printf("Over 5: ");
    for(int i = 1; i <= r5; i++)
        printf("#");
    printf("\n");
    return 0;
}