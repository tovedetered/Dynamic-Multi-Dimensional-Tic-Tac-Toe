//
// Created by Spenser Kramer on 11/24/23.
//

#include "ASCIIGame.h"

ASCIIGame::ASCIIGame(int numRow, int numCol, int numUp, int inNumWin)
        : TicTacToe3D(numRow, numCol, numUp, inNumWin) {

}

void ASCIIGame::drawBoard() {

}

xyz ASCIIGame::getInput(int p) {
    xyz input {};
    int x;
    int y;
    int z;
    while(true){
        cout << "It's Player " << p << "'s Move!" << endl
             << "Please Input Where you would like to Go!" << endl
             << "1st. x coordinate (what colum): ";
        cin >> x;
        x -=1;
        cout << "2nd. y coordinate (what Row): ";
        cin >> y;
        y -=1;
        cout << "3rd. z coordinate (what Board): ";
        cin >> z;
        z -=1;
        if(x > width || y > height || z > depth ||
           x < 0 || y < 0 || z < 0){
            cout << "ERROR coordinates outside of playable area, please try again"
                 << endl;
        }
        else{
            if(whoWhere[access(x,y,z)] == 0){
                break;
            }
            else{
                cout << "That space is occupied, please try again" << endl;
            }
        }
    }
    input = {x, y, z};
    return input;
}

