/*
    UNDER CONSTRUCTION
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

int board[SIZE][SIZE];

int checkBoard(int n, int i, int j);

void printBoard();

void generate();

int getDigit();

int main()
{
    srand(time(0));    
    generate();
    printBoard();
    return 0;
}

int checkBoard(int n, int i, int j)
{
    // Check row
    for(int k=0; k<SIZE; k++)
    {
        if(n == board[i][k]) return 0;
    }
    // Check column
    for(int k=0; k<SIZE; k++)
    {
        if(n == board[k][j]) return 0;
    }
    // Check box
    // int r = i/3;
    // int c = j/3;
    // for(int p = r*3; p < (r+1)*3; p++)
    // {
    //     for(int q = c*3; q < (c + 1) * 3; q++)
    //     {
    //         if(p == i && c == j) continue;
    //         else if(n == board[p][q]) return 0;
    //     }
    // }
}

void printBoard()
{
    printf("+---------+---------+---------+\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("|");
        for(int j = 0; j < SIZE; j++)
        {
            printf(" %d ", board[i][j]);
            if((j+1)%3 == 0) printf("|");
        }
        printf("\n");
        if((i+1)%3 == 0) printf("+---------+---------+---------+\n");
    }
}

int getDigit()
{
    int random = rand()%9;
    return random+1;
}

void generate()
{
    for(int i=0; i < SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            int digit = 0;
            do
            {
                digit = getDigit();                
            } while(!checkBoard(digit, i, j));
            
            board[i][j] = digit;
        }
    }
}