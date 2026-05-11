#include <iostream>
#include "player_input.h"
using namespace std;
void input_info(Player p[2]) {
    cout << "Enter Player 1 Name: " << endl;
    cin >> p[0].name;
    cout << "Choose (X or O): " << endl;
    cin >> p[0].type;

    cout << "Enter Player 2 Name: " << endl;
    cin >> p[1].name;
    cout << "Choose (X or O): " << endl;
    cin >> p[1].type;
}

bool make_move(Player p[ ], int index, char arr[7][7]) {
    int c;
    cout << "Turn of " << p[index].name << " (" << p[index].type << ")" << endl;
    cout << "Enter Column (0-6): ";
    cin >> c;

    if (c >= 0 && c <= 6) {
        for (int r = 6; r >= 0; r--) {
            if (arr[r][c] == ' ') {
                arr[r][c] = p[index].type;
                p[index].row = r;
                p[index].col = c;
                return true;
            }
        }
        cout << "Column is full" << endl;
    }
    else {
        cout << "Invalid Column!" << endl;
    }

    return false;
}