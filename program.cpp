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