//
// Created by tobed on 11/24/2023.
//

#ifndef INC_3_DTIC_TAC_TOE_GAMEMANAGER_H
#define INC_3_DTIC_TAC_TOE_GAMEMANAGER_H

#include "TicTacToe3D.h"
#include "Menu.h"


struct settings{
    int test;
};

class GameManager {
public:
    GameManager();
    virtual void initialize() = 0;
    void mainGameLoop();
    virtual void run3dTTT() = 0;
protected:
   enum Games {
       Tic3dTacToe = 1
   };
   class Menu* menu;
   TicTacToe3D* TTT3d;


private:

};


#endif //INC_3_DTIC_TAC_TOE_GAMEMANAGER_H
