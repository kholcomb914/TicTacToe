#include <vector>

bool isValidMove(const std::vector<std::vector<char>>& board, int x, int y) {
    // Check if the position is on the board
    if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size()) {
        return false;
    }
    
    // Check if the position is empty and can be taken
    if (board[x][y] != ' ') {
        return false;
    }

    
    return true;
}

void displayBoard(char[3][3] board) {
	std::cout << board[0][0] << " " << board[0][1] << " " << board[0][2] << std::endl;
	std::cout << board[1][0] << " " << board[1][1] << " " << board[1][2] << std::endl;
	std::cout << board[2][0] << " " << board[2][1] << " " << board[2][2] << std::endl;
}
