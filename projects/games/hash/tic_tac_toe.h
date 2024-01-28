#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

void displayBoard(char board[3][3]);
int play(char board[3][3], char player, int move);
int checkWinner(char board[3][3], char player);

#endif
