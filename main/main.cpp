#include <iostream>
#include "board.h"
#include "messages.h"
#include "functionality.h"
using namespace std;

int main()
{
	const int n = 9;
	int diff_game, level, count_of_fill, playerBoard[9][9], defaultBoard[9][9], x, y, num;
	int count_FillEasyBoard, count_FillMediumBoard, count_FillHardBoard;
	
	start_game();
	count_FillEasyBoard = fill_Counter(easy_Board, n);
	count_FillMediumBoard = fill_Counter(medium_Board, n);
	count_FillHardBoard = fill_Counter(hard_Board, n);


	//Validating the difficulty of the game
	do {
		cin >> diff_game;
		level = validating_Diff(diff_game);
	} while (level == -1);


	count_of_fill = check_BoardLevel(level, count_FillEasyBoard, count_FillMediumBoard, count_FillHardBoard);

	//Initialition and print the board
	fill_Board(playerBoard, defaultBoard, level, easy_Board, medium_Board, hard_Board, n);
	print_Board(playerBoard, n);


	while (count_of_fill < 81) {
		bool valid_Step, clearBox, check_row = true, check_column = true, check_littleSquare = true;

		cin >> x >> y >> num;

		//Validating the player step
		valid_Step = validating_Step(x, y, num);
		if (!valid_Step) {
			continue;
		}

		if (num == 0) {
			clearBox = clear_Box(playerBoard, x, y);
		}
		else {
			//Check the variables in player step
			check_column = check_Column(playerBoard, defaultBoard, x, y, num, n);
			check_row = check_Row(playerBoard, defaultBoard, x, y, num, n);
			check_littleSquare = check_LittleSquare(playerBoard, defaultBoard, (x - x % 3), (y - y % 3), num, x, y);
		}

		if ((check_column) && (check_row) && (check_littleSquare)) {
			if (playerBoard[x][y] == 0) {
				++count_of_fill;
			}
			playerBoard[x][y] = num;
		}


		print_Board(playerBoard, n);
	}

	if (count_of_fill == 81) {
		end_game();
	}

	return 0;
}