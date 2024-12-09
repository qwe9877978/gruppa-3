#include <iostream>
#include <vector>

using namespace std;

const int BOARD_SIZE = 3;
const char EMPTY = ' ', X = 'X', O = 'O';

// Двумерный массив 3x3 представляет игровое поле
vector<vector<char>> board(BOARD_SIZE, vector<char>(BOARD_SIZE, EMPTY));

// Функция для отображения игрового поля на консоли
void printBoard() {
    cout << "+---+---+---+" << endl;
    for (int i = 0; i < BOARD_SIZE; i++) {
        cout << "| ";
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "+---+---+---+" << endl;
    }
}

