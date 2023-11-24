//
// Created by Spenser Kramer on 11/24/23.
//

#ifndef INC_3_DTIC_TAC_TOE_ASCII3DTICTACTOEGAME_H
#define INC_3_DTIC_TAC_TOE_ASCII3DTICTACTOEGAME_H

#include <iostream>
#include "TicTacToe3D.h"

using namespace std;

class ASCII3DTicTacToeGame : public TicTacToe3D {
public:
    explicit ASCII3DTicTacToeGame(int numRow = 3, int numCol = 3, int numUp = 3, int innumWin = 3);
    ~ASCII3DTicTacToeGame() override;
    void drawBoard() override;
private:
    xyz getInput(int p) override;
    char p1 = 'X';
    char p2 = 'O';
    char getPChar(int x, int y, int z);

};


#endif //INC_3_DTIC_TAC_TOE_ASCII3DTICTACTOEGAME_H
