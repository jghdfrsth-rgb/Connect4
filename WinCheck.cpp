#include <iostream>
#include "WinCheck.h"
using namespace std;
bool checkWin(char player) {
    // Check horizontal
    for (int r = 0; r < 7; r++) {
        for (int c = 0; c <= 3; c++) {
            if (board[r][c] == player && 
                board[r][c + 1] == player && 
                board[r][c + 2] == player && 
                board[r][c + 3] == player) {
                return true;
            }
        }
    }
    // Check vertical
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 7; c++) {
            if (board[r][c] == player && 
                board[r + 1][c] == player && 
                board[r + 2][c] == player && 
                board[r + 3][c] == player) {
                return true;
            }
        }
    }

    // check first diagonal 
    for (int r = 0; r <= 3; r++) {
        for (int c = 0; c <= 3; c++) {
            if (board[r][c] == player && 
                board[r + 1][c + 1] == player && 
                board[r + 2][c + 2] == player && 
                board[r + 3][c + 3] == player) {
                return true;
            }
        }
    }

    // check second diagonal
    for (int r = 0; r <= 3; r++) {
        for (int c = 3; c < 7; c++) {
            if (board[r][c] == player && 
                board[r + 1][c - 1] == player && 
                board[r + 2][c - 2] == player && 
                board[r + 3][c - 3] == player) {
                return true;
            }
        }
    }

    
    return false; 
}

 // Check for a draw 
bool checkDraw() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (board[i][j] == ' ') { 
                
                return false; 
            }
        }
    }
    return true; 
}
