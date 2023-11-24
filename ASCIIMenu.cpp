//
// Created by tobed on 11/24/2023.
//

#include "ASCIIMenu.h"

ASCIIMenu::ASCIIMenu() = default;

void ASCIIMenu::drawMainMenu() {
    cout << "***** Main Menu *****" << endl
         << "1. Select Game" << endl
         << "2. Settings" << endl
         << "3. HighScores" << endl
         << "4. Quit Game" << endl
         << "Input Selection: ";

}

void ASCIIMenu::drawGameSelect() {
    cout << "***** Game Select *****" << endl
         << "1. 3D TicTacToe" << endl
         << "2. Back" << endl
         << "Input Selection: ";
}

void ASCIIMenu::drawChangeSettings() {
    cout << "***** Settings *****" << endl
         << "WIP" << endl;
}

void ASCIIMenu::drawHighScores() {
    int totalGames = 0;
    ifstream TotalTTTG("TTTGNUM.txt");
    if(!TotalTTTG){
        cerr << "ERROR: TTTGNUM.txt COULD NOT BE OPENED" << endl;
        exit(1);
    }
    TotalTTTG >> totalGames;
    TotalTTTG.close();
    cout <<"***** High Scores *****" << endl
         << "Total 3D Tic-Tac-Toe Games: " << totalGames << endl;
}

bool ASCIIMenu::areYouSure() {
    char choice;
    cout << "Are You Sure? (Y/N) ";
    choice = getCinInput<char>();
    if(choice == 'Y' || choice == 'y'){
        return true;
    }
    return false;
}

int ASCIIMenu::getInput() {
    int choice;
    choice = getCinInput<int>();
    return choice;
}
