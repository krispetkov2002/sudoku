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

void problem_LittleSquare() {
	cout << "The number is already available in this little square.\n";
}

void problem_DefaultBoard() {
	cout << "You have not permision to change the default Sudoku game!\n";
}

void end_game() {
	cout << "Congratulations, you managed to order the sudoku!\n";
}