//
// Created by Spenser Kramer on 11/23/23.
//

#include "TicTacToe3D.h"

TicTacToe3D::TicTacToe3D(int numRow, int numCol, int numUp, int inNumWin) {
    totalSize = numRow*numCol*numUp;
    width = numCol;
    depth = numUp;
    height = numRow;
    numWin = inNumWin;
    player = 0;
    mostRecentMove = {};
    whoWhere = new int[totalSize];
    for(int i = 0; i < totalSize; i++){
        whoWhere[i] = 0;
    }
}

int TicTacToe3D::runGame() {
    int result;
    whoWon = 0;
    player = 0;
    bool gameEnd = false;
    drawBoard();
    for(int i = 1; !gameEnd; i++){
        if(i%2 == 1){
            player = 1;
            playerTurn(player);
        }
        else if(i%2 == 0){
            player = 2;
            playerTurn(player);
        }
        if(i/2 > numWin-2){

            result = whoWin();
            if(result != 0){
                gameEnd = true;
                whoWon = player;
            }
        }
        if(i == totalSize){
            gameEnd = true;
            return whoWon = 3;
        }
    }
    return whoWon;
}

int TicTacToe3D::whoWin() { //non-active player cannot win
    int result = 0;
    int mRx = mostRecentMove.x;
    int mRy = mostRecentMove.y;
    int mRz = mostRecentMove.z;
    int counter = 0;

    //row
    for(int x = 0; x< width; x++){
        if(whoWhere[access(0 + x, mRy, mRz)] == player){
            counter++;
        }
        if(whoWhere[access(0 + x, mRy, mRz)] != player){
            counter = 0;
        }
    }
    if(counter >= numWin){
        return 1;
    }
    else{
        counter = 0;
    }
    //column
    for(int y = 0; y< height; y++){
        if(whoWhere[access(mRx, 0 + y, mRz)] == player){
            counter++;
        }
        if(whoWhere[access(mRx, 0 + y, mRz)] != player){
            counter = 0;
        }
    }
    if(counter >= numWin){
        return 1;
    }
    else{
        counter = 0;
    }
    //depth thing
    for(int z = 0; z< depth; z++){
        if(whoWhere[access(mRx, mRy, 0+z)] == player){
            counter++;
        }
        if(whoWhere[access(mRx, mRy, 0+z)] != player){
            counter = 0;
        }
    }
    if(counter >= numWin){
        return 1;
    }
    else{
        counter = 0;
    }
    //need Diagonal and anti-diagonal and 3d diagonal
    return 0;
}

void TicTacToe3D::playerTurn(int p) {
    xyz playerinput{};
    playerinput = getInput(p);
    updateBoard(playerinput, p);
    mostRecentMove = playerinput;
    drawBoard();
}

void TicTacToe3D::updateBoard(xyz pin, int p) {
    int x = pin.x;
    int y = pin.y;
    int z = pin.z;
    whoWhere[access(x,y,z)] = p;
}

int TicTacToe3D::access(int x, int y, int z) const {
    return (x+ width *(y+depth*z));
}

TicTacToe3D::~TicTacToe3D() {

}
