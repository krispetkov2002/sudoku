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
* Definition functions for printing messages in console
*
*/
#include <iostream>
using namespace std;

void start_game() {
	cout << "Welcome to Sudoku game!\n";
	cout << "Choose difficulty to play: 1 = easy, 2 = medium, 3 = hard\n";
}

void easy() {
	cout << "You chose an Easy level!\n";
}

void medium() {
	cout << "You chose an Medium level!\n";
}

void hard() {
	cout << "You chose an Hard level!\n";
}

void validation_Step() {
	cout << "Invalid step. Please, chek your input!\n";
}

void problem_Column() {
	cout << "The number is already available in this column.\n";
}

void problem_Row() {
	cout << "The number is already available in this row.\n";
}

void problem_Block() {
	cout << "The number is already available in this block.\n";
}

void problem_DefaultBoard() {
	cout << "You have not permision to change the default Sudoku game!\n";
}

void end_game() {
	cout << "Congratulations, you managed to order the sudoku!\n";
}