#include <stdio.h>
#include <stdlib.h>

/**
*  0 -> Empty cell
*  1 -> Player
* -1 -> Computer
*/

int board[3][3];

void gamePlay();

void computerMove();

void playerMove();

void printBoard();

int isEmpty(int, int);

int checkBoard();

char getChar(int);

int main()
{
    gamePlay();

    return 0;
}

char getChar(int x)
{
    if(!x) return ' ';
    if(x == 1) return 'X';
    if(x == -1) return 'O';
}

void printBoard()
{
    printf("\n");
    printf(" %c | %c | %c \n", getChar(board[0][0]), getChar(board[0][1]), getChar(board[0][2]));
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", getChar(board[1][0]), getChar(board[1][1]), getChar(board[1][2]));
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", getChar(board[2][0]), getChar(board[2][1]), getChar(board[2][2]));
    printf("\n");

    printf("\nX - Player \nO - Computer");

    printf("\n\nEnter the row and column index to place your mark. Row and column numbers are in the range 1, 2 and 3.\n\n");
}

int checkBoard()
{
    if(board[0][0] && board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0];
    if(board[0][2] && board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2];
    if(board[0][0] && board[0][0] == board[0][1] && board[0][1] == board[0][2]) return board[0][0];
    if(board[1][0] && board[1][0] == board[1][1] && board[1][1] == board[1][2]) return board[1][0];
    if(board[2][0] && board[2][0] == board[2][1] && board[2][1] == board[2][2]) return board[2][0];
    if(board[0][0] && board[0][0] == board[1][0] && board[1][0] == board[2][0]) return board[0][0];
    if(board[0][1] && board[0][1] == board[1][1] && board[1][1] == board[2][1]) return board[0][1];
    if(board[0][2] && board[0][2] == board[1][2] && board[1][2] == board[2][2]) return board[0][2];
    return 0;
}

void gamePlay()
{
    printBoard();

    int n = 0;

    while(1)
    {
        if(++n%2) playerMove();
        else computerMove();

        printf("\e[1;1H\e[2J");
        printBoard();

        if(checkBoard() == 1)
        {
            printf("Player wins.\n");
            break;
        }
        else if(checkBoard() == -1)
        {
            printf("Computer wins.\n");
            break;
        }
        else if (n == 9)
        {
            printf("No one wins!.\n");
            break;
        }
    }
}

void playerMove()
{
    int r, c;

    while(1)
    {
        scanf("%d %d", &r, &c);

        if(r >= 1 && r <= 3 && c >= 1 && c <= 3 && board[r-1][c-1] == 0) break;
        else
        {
            printf("Sorry, that cell is occupied or it's not a cell available in this game. Choose a valid empty cell.\n\n");
            continue;
        }
    }

    board[r-1][c-1] = 1;
}

void computerMove()
{
    int n = 0; // Store the count of the number of empty cells
    int r[9], c[9]; // Arrays to store empty cells' row, column indices respectively
    // Count the number of empty cells and if a move in that cell makes the computer win, pick it
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == 0)
            {
                r[n] = i;
                c[n] = j;
                n++;
                board[i][j] = -1;
                if(checkBoard() == -1) return;
                else board[i][j] = 0;
            }
        }
    }
    // Block the human player's winning move
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == 0)
            {
                board[i][j] = 1;
                if(checkBoard() == 1)
                {
                    board[i][j] = -1;
                    return;
                }
                else board[i][j] = 0;
            }
        }
    }
    // Pick a random cell
    int k = rand()%n;
    board[r[k]][c[k]] = -1;
}
