#include <iostream>
#include "functionality.h"
#include "messages.h"
using namespace std;

int validating_Diff(int diff_level) {
	if (diff_level != 1 && diff_level != 2 && diff_level != 3) {
		cout << "The difficulty level you selected is invalid!\n";
		cout << "Try again.\n";
		return -1;
	}
	return diff_level;
}

int check_BoardLevel(int level, int count_FillEasyBoard, int count_FillMediumBoard, int count_FillHardBoard) {
    if (level == 1) {
        return count_FillEasyBoard;
    }
    else if (level == 2) {
        return count_FillMediumBoard;
    }
    else if (level == 3) {
        return count_FillHardBoard;
    }
    else {
        return -1;
    }
}

void print_Board(int board[9][9], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 0) {
                if (j == 8) {
                    cout << '_';
                    break;
                }
                cout << '_' << ' ';
            }
            else {
                if (j == 8) {
                    cout << board[i][j];
                    break;
                }
                cout << board[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}

void stepFill_Board(int playerBoard[9][9], int defaultBoard[9][9], int original_b[9][9], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            playerBoard[i][j] = original_b[i][j];
            defaultBoard[i][j] = original_b[i][j];
        }
    }
}

void fill_Board(int playerBoard[9][9], int defaultBoard[9][9], int level, int easy_Board[9][9], int medium_Board[9][9], int hard_Board[9][9], int n) {
    if (level == 1) {
        easy();
        stepFill_Board(playerBoard, defaultBoard, easy_Board, n);
    }
    else if (level == 2) {
        medium();
        stepFill_Board(playerBoard, defaultBoard, medium_Board, n);
    }
    else if (level == 3) {
        hard();
        stepFill_Board(playerBoard, defaultBoard, hard_Board, n);
    }
}

bool validating_Step(int x, int y, int num) {
    bool val = true;

    if (x < 0 || x > 8 || y < 0 || y > 8 || num < 0 || num > 9) {
        val = false;
        validation_Step();
    }
    return val;
}

bool clear_Box(int defaultBoard[9][9], int x, int y) {
    if (defaultBoard[x][y] == 0) {
        return true;
    }
    else {
        problem_DefaultBoard();
        return false;
    }
}

bool check_Column(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int n) {
    bool value = true;

    for (int i = 0; i < n; ++i) {
        if (playerBoard[i][y] == num) {
            value = false;
            problem_Column();
        }
    }

    if (value && defaultBoard[x][y] == 0) {
        return true;
    }
    return false;
}

bool check_Row(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int n) {
    bool value = true;

    for (int i = 0; i < n; ++i) {
        if (playerBoard[x][i] == num) {
            value = false;
            problem_Row();
        }
    }

    if (value && defaultBoard[x][y] == 0) {
        return true;
    }
    return false;
}

bool check_LittleSquare(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int index1, int index2) {
    bool value = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (playerBoard[i + x][j + y] == num) {
                value = false;
                problem_LittleSquare();
            }
        }
    }

    if (value && (defaultBoard[index1][index2] == 0)) {
        return true;
    }
    return false;
}