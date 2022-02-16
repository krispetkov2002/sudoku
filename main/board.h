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
* Definition functions for fill the board. Here I store a easy, medium and hard boards
*
*/
#pragma once


int fill_Counter(int board[9][9], int n);

int easy_Board[9][9] = { 0, 6, 3, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 7, 0, 3, 0, 9, 2,
						9, 0, 0, 0, 0, 0, 6, 0, 0,
						0, 0, 9, 0, 0, 0, 8, 0, 0,
						0, 7, 0, 8, 0, 0, 1, 0, 3,
						0, 3, 1, 0, 0, 7, 5, 0, 0, 
						2, 0, 8, 0, 0, 1, 0, 0, 0,
						7, 0, 6, 5, 9, 0, 0, 0, 0, 
						0, 0, 0, 0, 0, 0, 0, 0, 0 };

int medium_Board[9][9] = { 9, 3, 8, 0, 0, 0, 1, 0, 5,
						0, 0, 4, 8, 6, 0, 0, 0, 0,
						6, 7, 0, 0, 0, 0, 0, 8, 0,
						0, 0, 5, 0, 8, 2, 0, 0, 0,
						0, 6, 0, 0, 0, 0, 0, 7, 0,
						0, 0, 0, 6, 9, 0, 5, 0, 0,
						0, 1, 0, 0, 0, 0, 0, 4, 2,
						0, 0, 0, 0, 4, 6, 8, 0, 0,
						8, 0, 3, 0, 0, 0, 6, 9, 7 };

int hard_Board[9][9] = { 0, 0, 8, 0, 0, 0, 2, 0, 0,
						0, 0, 3, 0, 0, 5, 0, 0, 1,
						0, 6, 0, 9, 0, 0, 0, 0, 8,
						0, 9, 0, 0, 5, 0, 8, 0, 0,
						6, 8, 0, 0, 7, 0, 0, 9, 4,
						0, 0, 2, 0, 1, 0, 0, 7, 0,
						7, 0, 0, 0, 0, 1, 0, 8, 0,
						3, 0, 0, 2, 0, 0, 5, 0, 0,
						0, 0, 6, 0, 0, 0, 4, 0, 0 };