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
    int numGames = 0;
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
            ifstream TTTGNum("TTTGNUM.txt");
            TTTGNum >> numGames;
            TTTGNum.close();

            ofstream NumTTTG("TTTGNUM.txt", ios::trunc);
            if(!NumTTTG){
                cerr << "TTGNUM.txt could not be opened" << endl;
                exit(1);
            }
            NumTTTG << numGames + 1;
            NumTTTG.close();

            ofstream TicTacToeLog("TicTacToe.txt", ios::app);
            if(!TicTacToeLog){
                cerr << "TicTacToe.txt Could not be opened" << endl;
                exit(1);
            }
            TicTacToeLog << "**********" << endl
                         << "Game " << numGames << endl
                         << "It was a tie!" << endl
                         << "Stats:  " << endl
                         << "Height: " << y << endl
                         << "Width: " << x << endl
                         << "Depth: " << z << endl
                         << "**********" << endl;
            TicTacToeLog.close();
            cout << "It's A Tie!!!" << endl
                 << "Would you like to play again? (Y/N) ";
            choice = getCinInput<char>();
            if (choice != 'Y' && choice != 'y') {
                delete TTT3d;
                return;
            }
            else{
                delete TTT3d;
            }
        }
        if (result == 1 || result == 2){
            ifstream TTTGNum("TTTGNUM.txt");
            TTTGNum >> numGames;
            TTTGNum.close();

            ofstream NumTTTG("TTTGNUM.txt", ios::trunc);
            if(!NumTTTG){
                cerr << "TTGNUM.txt could not be opened" << endl;
                exit(1);
            }
            NumTTTG << numGames + 1;
            NumTTTG.close();

            ofstream TicTacToeLog("TicTacToe.txt", ios::app);
            if(!TicTacToeLog){
                cerr << "TicTacToe.txt Could not be opened" << endl;
                exit(1);
            }
            TicTacToeLog << "**********" << endl
                         << "Game " << numGames << endl
                         << "Winner: Player" << result << "!" << endl
                         << "Stats:  " << endl
                         << "Height: " << y << endl
                         << "Width: " << x << endl
                         << "Depth: " << z << endl
                         << "**********" << endl;
            TicTacToeLog.close();
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


