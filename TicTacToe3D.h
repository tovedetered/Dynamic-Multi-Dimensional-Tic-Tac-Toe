//
// Created by Spenser Kramer on 11/23/23.
//

#ifndef INC_3_DTIC_TAC_TOE_TICTACTOE3D_H
#define INC_3_DTIC_TAC_TOE_TICTACTOE3D_H

#include "Utilities.h"

struct xyz{
    int x;
    int y;
    int z;
};

class TicTacToe3D { //Will just contain logic. ie, nums stored as ints, where other program can display diff
public:
    explicit TicTacToe3D(int numRow = 3, int numCol = 3, int numUp = 3, int inNumWin = 3);
    virtual ~TicTacToe3D();
    int runGame(); // 3=tie, 1=1, 2=2
protected:
    int* whoWhere = nullptr;
    int width;
    int depth;
    int height;

    virtual void drawBoard() = 0;
    virtual xyz getInput(int p) = 0;
    [[nodiscard]] int access(int x, int y, int z) const;
private:
    int numWin;
    int totalSize;
    xyz mostRecentMove{};
    int whoWin(); //0=none, 1=win, 2=tie
    int whoWon = 0; //1=1, 2=2, 3=tie
    int player;
    void playerTurn(int p);
    void updateBoard(xyz pin, int p);
    int depthWin();
};


#endif //INC_3_DTIC_TAC_TOE_TICTACTOE3D_H
