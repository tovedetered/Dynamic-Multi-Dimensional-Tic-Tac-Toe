//
// Created by Spenser Kramer on 11/24/23.
//

#ifndef INC_3_DTIC_TAC_TOE_ASCIIGAME_H
#define INC_3_DTIC_TAC_TOE_ASCIIGAME_H

#include <iostream>
#include "TicTacToe3D.h"

using namespace std;

class ASCIIGame : public TicTacToe3D {
public:
    explicit ASCIIGame(int numRow = 3, int numCol = 3, int numUp = 3, int innumWin = 3);
private:
    virtual void drawBoard();
    virtual xyz getInput(int p);

};


#endif //INC_3_DTIC_TAC_TOE_ASCIIGAME_H
