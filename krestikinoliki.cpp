
int main() {
    Board board;
    bool isXTurn = true;

    while (true) {
        board.print();

        int row, col;
        std::cout << (isXTurn ? "X" : "O") << ", введите координаты (строка, столбец): ";
        std::cin >> row >> col;
        row--;
        col--;

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board.getCell(row, col) != CellState::None) {
            std::cout << "Неверные координаты. Попробуйте еще раз.\n";
            continue;
        }