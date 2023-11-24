//
// Created by tobed on 11/24/2023.
//

#include "ASCIIGameManager.h"


ASCIIGameManager::ASCIIGameManager() {

}

ASCIIGameManager::~ASCIIGameManager() {

}



void ASCIIGameManager::initialize() {
    menu = new ASCIIMenu;
}

void ASCIIGameManager::run3dTTT() {
    int result = 0;
    char choice = 0;
    unsigned int x;
    unsigned int y;
    unsigned int z;
    unsigned int winCond;
    while(true) {
        cout << "Welcome to 3D Tic-Tac-Toe!!" << endl
             << "Please enter your desired # of columns (how wide): ";
        cin >> x;
        cout << "Please enter your desired # of rows (how tall): ";
        cin >> y;
        cout << "Please enter you desired amount of depth: ";
        cin >> z;
        cout << "Please enter your desired Win Condition: ";
        cin >> winCond;
        TTT3d = new ASCII3DTicTacToeGame(x, y, z, winCond);
        result = TTT3d->runGame();
        if (result == 3) {
            cout << "It's A Tie!!!" << endl
                 << "Would you like to play again? (Y/N) ";
            cin >> choice;
            if (choice != 'Y' && choice != 'y') {
                delete TTT3d;
                return;
            }
            else{
                delete TTT3d;
            }
        }
        if (result == 1 || result == 2){
            cout << "Congratulations Player " << result << "!" << endl
                 << "Would you like to play again? (Y/N) ";
            cin >> choice;
            if (choice != 'Y' && choice != 'y') {
                delete TTT3d;
                return;
            }
            else{
                delete TTT3d;
            }
        }
    }
}


