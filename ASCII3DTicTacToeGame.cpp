//
// Created by Spenser Kramer on 11/24/23.
//

#include "ASCII3DTicTacToeGame.h"

ASCII3DTicTacToeGame::ASCII3DTicTacToeGame(int numRow, int numCol, int numUp, int inNumWin)
        : TicTacToe3D(numRow, numCol, numUp, inNumWin) {

}

void ASCII3DTicTacToeGame::drawBoard() {
    for(int up = 0; up < depth; up++){
        cout << "***** Board " << up+1 << " *****";
        for(int row = 0; row < height; row++){
            cout << endl;
            if(row != 0) {
                for (int i = 0; i < (width * 2) - 1; i++) {
                    cout << " -";
                }
                cout << endl;
            }
            for(int column = 0; column < width; column ++){
                cout << " " << getPChar(column, row, up) << " ";
                if(column != width-1){
                    cout << "|";
                }
            }
        }
        cout << endl;
    }

}

xyz ASCII3DTicTacToeGame::getInput(int p) {
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

char ASCII3DTicTacToeGame::getPChar(int x, int y, int z) {
    int playerAtSpot = whoWhere[access(x,y,z)];
    if(playerAtSpot == 1){
        return p1;
    }
    else if(playerAtSpot == 2){
        return p2;
    }
    else{
        return ' ';
    }
    return 0;
}

ASCII3DTicTacToeGame::~ASCII3DTicTacToeGame() {
    delete whoWhere;
}

