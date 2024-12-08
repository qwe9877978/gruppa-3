// Функция для проверки, выиграл ли игрок с заданным символом
bool checkWin(char player) {
    // Проверка по горизонтали
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }
    // Проверка по вертикали
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    // Проверка по диагоналям
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}





// Проверка на выигрыш
        if (checkWin(currentPlayer)) {
            gameOver = true;
            cout << "Игрок " << currentPlayer << " победил!" << endl;
        }
