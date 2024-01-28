#include "tic_tac_toe.h"
#include <stdio.h>
#include <ctype.h>


void displayBoard(char board[3][3])
{
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int play(char board[3][3], char player, int move)
{
  
        if(board[move / 3][move % 3] != ' ')
        {
            printf("Invalid move, try again!\n");
            printf("Player %c, enter your move: \n", player);
            return 1;
        }

        if(move < 0 || move > 8)
        {
            printf("Invalid move, try again!\n");
            return 1;
        }

        board[move / 3][move % 3] = player;
        return 0;
}

int checkWinner(char board[3][3], char player)
{
    if(board[0][0] == player && board[0][1] == player && board[0][2] == player)
    {
        return 1;
    }
    else if(board[1][0] == player && board[1][1] == player && board[1][2] == player)
    {
        return 1;
    }
    else if(board[2][0] == player && board[2][1] == player && board[2][2] == player)
    {
        return 1;
    }
    else if(board[0][0] == player && board[1][0] == player && board[2][0] == player)
    {
        return 1;
    }
    else if(board[0][1] == player && board[1][1] == player && board[2][1] == player)
    {
        return 1;
    }
    else if(board[0][2] == player && board[1][2] == player && board[2][2] == player)
    {
        return 1;
    }
    else if(board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return 1;
    }
    else if(board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}