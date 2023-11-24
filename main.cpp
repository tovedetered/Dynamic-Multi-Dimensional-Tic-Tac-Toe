#include <iostream>
#include "ASCII3DTicTacToeGame.h"
#include "ASCIIGameManager.h"

int main() {
    ASCIIGameManager game;
    game.initialize();
    game.run3dTTT();

    return 0;
}
