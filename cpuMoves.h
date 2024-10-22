#ifndef cpuMoves_h
#define cpuMoves_h

#include <string>

using namespace std;

class CpuMoves {
    protected:
        int row, column;
        string xO;
        int rating;
        bool didWin;

    public:
    CpuMoves(int row, int col, string xO, int r, bool won);

    int getRow() const;

    int getColumn() const;

    string getXO() const;

    int getRating() const;

    bool getWin() const;

    bool didPlayerMove();

    string cpuMoveToString() const;


};


#endif