#include "Board.h"

// This is the constructor that initializes the board with 3 rows and 3 columns.
// each of the cells in the board start empty ' '
Board::Board() : board(3, vector<char>(3, ' ')) {}

/*
storeBoard function will store whatver move the player picks. Computers move and humans(us lol) move.
  
Parameters:
-provides the row and column for the player move
row is stored as (0, 1, or 2)
column is stored as (0, 1, or 2)
-players char(symbol) can be represented with X or O
  
- If the chosen cell in the board is empty, the move is stored, and the function returns true.
- If the chosen cell is already full or used, the function returns false.
  
-Just call this function whenever you want to store a move (for either the player or the computer).
-It will update the board with the new move if the cell is available.
 */
bool Board::storeBoard(int row, int col, char player) {
    // this is the counter for the row 
    int i = 0;
    // counter for the column
    int j = 0;

/* 
    using a while loop to iterate the board

    -outer loop for the rows & inner loop for the columns
    -outer loop goes through each row
    -inner loop should go through each of the colums in the row 

*/
    while (i < 3) {
        while (j < 3) {
            ///checks if the cell matches input & if the cell in empty
            if (i == row && j == col && board[i][j] == ' ') {
                /// should store the player move X or O
                board[i][j] = player;
                //returning true to show that the chosen move is valid
                return true;
            }
            // moves to next column in the current row
            ++j;
        }
        // j needed to be set back to 0 after the row & then incrementing i to move to next row
        j = 0;
        ++i;
    }
    // returning false if the chosen cell is already used/occupied
    return false;
}