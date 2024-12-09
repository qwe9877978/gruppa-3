int game() {
    char currentPlayer = X;
    bool gameOver = false;

    while (!gameOver) {
        // Вывод игрового поля
        printBoard();

        // Получение хода игрока
        int row, col;
        cout << "Игрок " << currentPlayer << ", введите номер строки и номер столбца (от 1 до 3): ";
        cin >> row >> col;

        // Валидация хода
        if (row < 1 or row > BOARD_SIZE or col < 1 or col > BOARD_SIZE or board[row - 1][col - 1] != EMPTY) {
            cout << "Неверный ход. Попробуйте снова." << endl;
            continue;
        }

        // Выполнение хода
        board[row - 1][col - 1] = currentPlayer;

        // Проверка на выигрыш
        if (checkWin(currentPlayer)) {
            gameOver = true;
            cout << "Игрок " << currentPlayer << " победил!" << endl;
        }

        // Ничья
        else if (isBoardFull()) {
            gameOver = true;
            cout << "Ничья!" << endl;
        }

        // Переключение игрока
        currentPlayer = (currentPlayer == X) ? O : X;
    }

    return 0;
}
