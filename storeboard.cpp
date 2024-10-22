#include <vector>

using namespace std;

class Board {
    protected:

    /*
    *I have also re-done this in a header and cpp file implmentation for better organization*

    - set the board as a 3 x 3 using a 2d vector of characters

    - each of the cells in the board start empty ' ' 

    */
    vector<vector<char>> board;

public:
// this is my constructor that initializes the board. Has 3 rows and 3 columns
Board() : board(3,vector<char>(3, ' ')) {}

/*
- storeBoard function will store whatver move the player picks. Computers move and humans(us lol) move.

Parameters:
-provides the row and column for the player move
row is stored as (0, 1, or 2)
column is stored as (0, 1, or 2)
-players char(symbol) can be represented with X or O

-If the chosen cell in the board is empty then the chosen move is stored and storeBoard returns true.
-If the chosen cell in the board is full or already used then the move wont be stored and will return false.

- just call storeBoard whenever you wanter to userMove or computerMove. Should update the board with the new board.


*/

bool storeBoard(int row, int col, char player) {
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
            //checks if the cell matches input & if the cell in empty
            if ( i == row && j == col && board[i][j] == ' ') {
                // should store the player move X or O
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
};