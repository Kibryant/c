#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "tic_tac_toe.c"

int main()
{
    char player1, player2;
    int move;

    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    while (1)
    {

        printf("Welcome to the game of hash!\n");
        printf("Player 1, choice(X, O): \n");
        scanf("%c", &player1);
        player1 = toupper(player1);

        if(player1 != 'X' && player1 != 'O')
        {
            printf("Invalid choice, try again!\n");
            break;;
        }

        if (player1 == 'X')
        {
            printf("Player 1 = X\n");
            printf("Player 2 = O\n");
            player2 = 'O';
            break;
        }
        else
        {
            printf("Player 1 = O\n");
            printf("Player 2 = X\n");
            player2 = 'X';
            break;
        }

    }
    
    while (1)
    {
        displayBoard(board);

        printf("Player 1, enter your move: \n");
        scanf("%d", &move);
        int verifiy_move_player1 = play(board, player1, move);

        if(verifiy_move_player1 == 1)
        {
            continue;
        }


        int player1_win_the_game = checkWinner(board, player1);

        if(player1_win_the_game == 1)
        {
            printf("Player 1 win the game!\n");
            displayBoard(board);
            break;
        }
       
        displayBoard(board);

        while (1)
        {
            printf("Player 2, enter your move: \n");
            scanf("%d", &move);
            displayBoard(board);
            int verify_move_play2 = play(board, player2, move);
            if (verify_move_play2 == 0)
            {
                break;
            }

        }

                
        int player2_win_the_game = checkWinner(board, player2);


        if(player2_win_the_game == 1)
        {
            printf("Player 2 win the game!\n");
            displayBoard(board);
            break;
        }

        
    }
    

    return 0;
}
