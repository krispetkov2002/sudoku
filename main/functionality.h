/**
*
* Solution to course project # 6
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Kristiyan Petkov
* @idnumber 1MI0600016
* @compiler VC
*
* Definition functions for full functionality in the game
*
*/
#pragma once

int validating_Diff(int diff_level);

int check_BoardLevel(int level, int count_FillEasyBoard, int count_FillMediumBoard, int count_FillHardBoard);

void print_Board(int board[9][9], int n);

void loading_Game(int playerBoard[9][9], int defaultBoard[9][9], int original_b[9][9], int n);

void fill_Board(int playerBoard[9][9], int defaultBoard[9][9], int level, int easy_Board[9][9], int medium_Board[9][9], int hard_Board[9][9], int n);

bool validating_Step(int x, int y, int num);

void cleaning_Board(int playerBoard[9][9], int defaultBoard[9][9], int x, int y);

bool player_Permision(int defaultBoard[9][9], int x, int y);

bool check_Column(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int n);

bool check_Row(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int n);

bool check_Block(int playerBoard[9][9], int defaultBoard[9][9], int x, int y, int num, int index1, int index2);