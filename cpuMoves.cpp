#include "cpuMoves.h"
#include <iostream>
#include <string>

using namespace std;

CpuMoves::CpuMoves(int row, int col, string xO, int r, bool won) 
    : row(row), column(col), xO(xO), rating(r), didWin(won) {}

int CpuMoves::getRow() const {
    return row;
}

int CpuMoves::getColumn() const {
    return column;
}

string CpuMoves::getXO() const {
    return xO;
}

int CpuMoves::getRating() const {
    return rating;
}

bool CpuMoves::didPlayerMove() {

}

bool CpuMoves::getWin() const {
    return didWin;
}

string CpuMoves::cpuMoveToString() const{
    return "The cpu places " + getXO() + " to row " + to_string(getRow()) + " column " + to_string(getColumn());
}