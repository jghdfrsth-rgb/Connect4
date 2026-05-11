#ifndef PLAYER_INPUT_H
#define PLAYER_INPUT_H
struct Player {
    std::string name;
    char type;
    int row, col;
};
void input_info();
bool make_move();
#endif