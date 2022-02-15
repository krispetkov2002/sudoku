
int fill_Counter(int board[9][9], int n) {
    int counter = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] != 0) {
                counter++;
            }
        }
    }
    return counter;
}