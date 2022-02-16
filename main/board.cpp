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
* Declarate functions for fill the board
*
*/
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