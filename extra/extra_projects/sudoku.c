/* 
    UNDER CONSTRUCTION
*/

#include <stdio.h>

#define SIZE 9

int board[SIZE][SIZE];

int check(int n, int i, int j);

void printBoard();

int main()
{
    printBoard();
    return 0;
}

int check(int n, int i, int j)
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
    // Check matrix
    int r = i/3;
    int c = j/3;
    for(int p = r*3; p < (r+1)*3; p++)
    {
        for(int q = c*3; q < (c + 1) * 3; q++)
        {
            if(p == i && c == j) continue;
            else if(n == board[p][q]) return 0;
        }
    }
}

void printBoard()
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}