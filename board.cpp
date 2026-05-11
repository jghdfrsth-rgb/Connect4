#include "board.h"
#include <iostream>

using namespace std;

char board[7][7];

void initializeBoard() {
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++)
            board[i][j] = ' ';
}

void drawBoard() {
    for (int i = 0; i < 7; i++) {
        cout << "| ";
        for (int j = 0; j < 7; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "---------------------" << endl;
    }
}