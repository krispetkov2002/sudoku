#pragma once

int validating_Diff(int diff_level);

int check_BoardLevel(int level, int count_FillEasyBoard, int count_FillMediumBoard, int count_FillHardBoard);

void print_Board(int board[9][9], int n);

void stepFill_Board(int playerBoard[9][9], int defaultBoard[9][9], int original_b[9][9], int n);

void fill_Board(int playerBoard[9][9], int defaultBoard[9][9], int level, int easy_Board[9][9], int medium_Board[9][9], int hard_Board[9][9], int n);

bool validating_Step(int x, int y, int num);

bool clear_Box(int defaultBoard[9][9], int x, int y);

bool check_Column(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int n);

bool check_Row(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int n);

bool check_LittleSquare(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int index1, int index2);