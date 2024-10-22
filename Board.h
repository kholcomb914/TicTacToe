#ifndef BOARD_H
#define BOARD_H

#include <vector>
using namespace std;

class Board {
    protected:
    // set the board as a 3 x 3 to store the moves using a 2d vector of characters
    vector<vector<char>> board;

    public:
    // constructor for the board
    Board();
    bool storeBoard(int row, int col, char player);
    // all of this is explained in the Board.cpp or the storeboard.cpp file. 
    // I origionally created the storeboard.cpp all in one file, but made this header file and a .cpp implementation for clarity. 
    // choose whichever implementation works best.

};

#endif
